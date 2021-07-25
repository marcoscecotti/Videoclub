#include "VPeliculas.h"
#include "../Videoclub/Renta.h"
#include <wx/grid.h>
#include "../Videoclub/Pelicula.h"
#include <wx/msgdlg.h>
#include "DEditarPelicula.h"
#include "DAgregarPelicula.h"
#include <wx/wx.h>
#include <wx/string.h>
#include <string>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
using namespace std;
VPeliculas::VPeliculas(wxWindow *parent) : VentanaPeliculas(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int cant_peliculas= renta->CantidadPeliculas(); 
	grilla->AppendRows(cant_peliculas); 
	for (int i=0;i<cant_peliculas;i++) CargarFilaPeliculas(i);
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows); 
}

void VPeliculas::CargarFilaPeliculas(int i){
	Renta *renta=Singleton::ObtenerInstancia(); 
	Pelicula &p=renta->VerPelicula(i);
	
	grilla->SetCellValue(i,0,wxString()<<p.VerCodPel());
	grilla->SetCellValue(i,1,p.VerNomPel());
	grilla->SetCellValue(i,2,p.VerCategoria());
	grilla->SetCellValue(i,3,wxString()<<obtener_dia(p.VerFechaEstreno())<<"/"<<obtener_mes(p.VerFechaEstreno())<<"/"<<obtener_anio(p.VerFechaEstreno()));
}

void VPeliculas::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}

void VPeliculas::ClickBuscar( wxCommandEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	long codPel;
	int res=renta->BuscarCodigoPel(busqueda->GetValue().ToLong(&codPel));
	if (res==-1) 
		wxMessageBox("No se encontraron coincidencias");
	else {
		grilla->SetGridCursor(res,0); 
		grilla->SelectRow(res); 
	}
}

void VPeliculas::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarPelicula nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal()) 
		CargarFilaPeliculas(fila_actual); 
}

void VPeliculas::ClickGrilla( wxGridEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int columna=event.GetCol();
	int cant_peliculas=renta->CantidadPeliculas();
	switch(columna) { 
	case 0: renta->OrdenarPeliculas(1); break;
	case 1: renta->OrdenarPeliculas(2); break;
	case 2: renta->OrdenarPeliculas(4); break;
	case 3: renta->OrdenarPeliculas(3); break;
	}
	for (int i=0;i<cant_peliculas;i++) CargarFilaPeliculas(i); 
}

void VPeliculas::ClickAgregar( wxCommandEvent& event )  {
	DAgregarPelicula nueva_ventana(this); 
	if (nueva_ventana.ShowModal()==1) { 
		Renta *renta=Singleton::ObtenerInstancia(); 
		grilla->AppendRows(1); 
		int pos_nuevo = renta->CantidadPeliculas()-1;
		CargarFilaPeliculas(pos_nuevo); 
		grilla->SetGridCursor(pos_nuevo,0); 
		grilla->SelectRow(pos_nuevo); 
	}
}

void VPeliculas::ClickEditar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarPelicula nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal())
		CargarFilaPeliculas(fila_actual); 
}

void VPeliculas::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow();
	int res = wxMessageBox("Eliminar el registro?",grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if (res==wxYES) {
		grilla->DeleteRows(fila_actual,1);
		Renta *renta=Singleton::ObtenerInstancia(); 
		renta->EliminarPelicula(fila_actual);
		renta->GuardarPeliculas();
	}
}

VPeliculas::~VPeliculas() {
	
}

void VPeliculas::CambiaTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[4], ancho_total_viejo=0; 
	for (int i=0;i<4;i++) { 
		tamanios[i] = grilla->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo=grilla->GetSize().GetWidth(); 
	grilla->BeginBatch(); 
	for (int i=0;i<4;i++) 
		grilla->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	grilla->EndBatch();
}


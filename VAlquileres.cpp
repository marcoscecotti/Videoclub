#include "VAlquileres.h"
#include "../Videoclub/Renta.h"
#include "../Videoclub/Alquiler.h"
#include <wx/msgdlg.h>
#include "DEditarAlquiler.h"
#include "DAgregarAlquiler.h"
#include <wx/string.h>
#include <string>
#include <wx/grid.h>
#include <wx/wx.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
using namespace std;
VAlquileres::VAlquileres(wxWindow *parent) : VentanaAlquileres(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int cant_alquileres= renta->CantidadPelisAlquiladas(); 
	grilla->AppendRows(cant_alquileres); 
	for (int i=0;i<cant_alquileres;i++) CargarFilaAlquileres(i);
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows); 
}

void VAlquileres::CargarFilaAlquileres(int i) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	Alquiler &a=renta->VerAlquiler(i);
	
	grilla->SetCellValue(i,0,wxString()<<a.VerCodAlquiler());
	grilla->SetCellValue(i,1,wxString()<<a.VerCodCliente());
	grilla->SetCellValue(i,2,wxString()<<a.VerCodPel());
	grilla->SetCellValue(i,3,wxString()<<a.VerPrecio());
	grilla->SetCellValue(i,4,wxString()<<obtener_dia(a.VerFechaHasta())<<"/"<<obtener_mes(a.VerFechaHasta())<<"/"<<obtener_anio(a.VerFechaHasta()));
}

void VAlquileres::ClickBuscar( wxCommandEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	long codAlquiler;
	int res=renta->BuscarCodigoAlquiler(busqueda->GetValue().ToLong(&codAlquiler));
	if (res==-1) 
		wxMessageBox("No se encontraron coincidencias");
	else {
		grilla->SetGridCursor(res,0); 
		grilla->SelectRow(res); 
	}
}

void VAlquileres::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarAlquiler nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal()) 
		CargarFilaAlquileres(fila_actual); 
}

void VAlquileres::ClickGrilla( wxGridEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int columna=event.GetCol();
	int cant_alquileres=renta->CantidadPelisAlquiladas();
	switch(columna) { 
	case 0: renta->OrdenarAlquileres(1); break;
	case 1: renta->OrdenarAlquileres(3); break;
	case 2: renta->OrdenarAlquileres(2); break;
	case 3: renta->OrdenarAlquileres(5); break;
	case 4: renta->OrdenarAlquileres(4); break;
	}
	for (int i=0;i<cant_alquileres;i++) CargarFilaAlquileres(i); 
}

void VAlquileres::ClickAgregar( wxCommandEvent& event )  {
	DAgregarAlquiler nueva_ventana(this); 
	if (nueva_ventana.ShowModal()==1) { 
		Renta *renta=Singleton::ObtenerInstancia(); 
		grilla->AppendRows(1); 
		int pos_nuevo = renta->CantidadPelisAlquiladas()-1;
		CargarFilaAlquileres(pos_nuevo); 
		grilla->SetGridCursor(pos_nuevo,0); 
		grilla->SelectRow(pos_nuevo); 
	}
}

void VAlquileres::ClickEditar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarAlquiler nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal())
		CargarFilaAlquileres(fila_actual); 
}

void VAlquileres::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow();
	int res = wxMessageBox("Eliminar el registro?",grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if (res==wxYES) {
		grilla->DeleteRows(fila_actual,1);
		Renta *renta=Singleton::ObtenerInstancia(); 
		renta->EliminarAlquiler(fila_actual);
		renta->GuardarAlquileres();
	}
}

VAlquileres::~VAlquileres() {
	
}

void VAlquileres::CambiaTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[5], ancho_total_viejo=0; 
	for (int i=0;i<5;i++) { 
		tamanios[i] = grilla->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo=grilla->GetSize().GetWidth(); 
	grilla->BeginBatch(); 
	for (int i=0;i<5;i++) 
		grilla->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	grilla->EndBatch();
}

void VAlquileres::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}


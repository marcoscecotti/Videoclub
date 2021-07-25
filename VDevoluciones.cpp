#include "VDevoluciones.h"
#include "../Videoclub/Renta.h"
#include "../Videoclub/Devolucion.h"
#include <wx/msgdlg.h>
#include "DEditarDevolucion.h"
#include "DAgregarDevolucion.h"
#include <wx/wx.h>
#include <wx/string.h>
#include <string>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
using namespace std;
VDevoluciones::VDevoluciones(wxWindow *parent) : VentanaDevoluciones(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int cant_devoluciones= renta->CantidadDevoluciones(); 
	grilla->AppendRows(cant_devoluciones); 
	for (int i=0;i<cant_devoluciones;i++) CargarFilaDevoluciones(i);
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows); 
}

void VDevoluciones::CargarFilaDevoluciones(int i) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	Devolucion &d=renta->VerDevolucion(i);
	
	grilla->SetCellValue(i,0,wxString()<<d.VerCodDevolucion());
	grilla->SetCellValue(i,1,wxString()<<d.VerCodAlquiler());
	grilla->SetCellValue(i,2,d.VerEstado());
	grilla->SetCellValue(i,3,wxString()<<obtener_dia(d.VerFechaDevolucion())<<"/"<<obtener_mes(d.VerFechaDevolucion())<<"/"<<obtener_anio(d.VerFechaDevolucion()));
}

void VDevoluciones::ClickBuscar( wxCommandEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	long codDevolucion;
	int res=renta->BuscarCodigoDevolucion(busqueda->GetValue().ToLong(&codDevolucion));
	if (res==-1) 
		wxMessageBox("No se encontraron coincidencias");
	else {
		grilla->SetGridCursor(res,0); 
		grilla->SelectRow(res); 
	}
}

void VDevoluciones::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarDevolucion nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal()) 
		CargarFilaDevoluciones(fila_actual); 
}

void VDevoluciones::ClickGrilla( wxGridEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int columna=event.GetCol();
	int cant_devoluciones=renta->CantidadDevoluciones();
	switch(columna) { 
	case 0: renta->OrdenarDevoluciones(1); break;
	case 1: renta->OrdenarDevoluciones(2); break;
	case 2: renta->OrdenarDevoluciones(3); break;
	case 3: renta->OrdenarDevoluciones(4); break;
	}
	for (int i=0;i<cant_devoluciones;i++) CargarFilaDevoluciones(i); 
}

void VDevoluciones::ClickAgregar( wxCommandEvent& event )  {
	DAgregarDevolucion nueva_ventana(this); 
	if (nueva_ventana.ShowModal()==1) { 
		Renta *renta=Singleton::ObtenerInstancia(); 
		grilla->AppendRows(1); 
		int pos_nuevo = renta->CantidadDevoluciones()-1;
		CargarFilaDevoluciones(pos_nuevo); 
		grilla->SetGridCursor(pos_nuevo,0); 
		grilla->SelectRow(pos_nuevo); 
	}
}

void VDevoluciones::ClickEditar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarDevolucion nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal())
		CargarFilaDevoluciones(fila_actual); 
}

void VDevoluciones::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow();
	int res = wxMessageBox("Eliminar el registro?",grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if (res==wxYES) {
		grilla->DeleteRows(fila_actual,1);
		Renta *renta=Singleton::ObtenerInstancia(); 
		renta->EliminarDevolucion(fila_actual);
		renta->GuardarDevoluciones();
	}
}

VDevoluciones::~VDevoluciones() {
	
}

void VDevoluciones::CambiaTamanio( wxSizeEvent& event )  {
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

void VDevoluciones::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}


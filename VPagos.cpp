#include "VPagos.h"
#include "../Videoclub/Renta.h"
#include "../Videoclub/Pago.h"
#include <wx/msgdlg.h>
#include "DEditarPago.h"
#include "DAgregarPago.h"
#include <wx/wx.h>
#include <wx/string.h>
#include <string>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
using namespace std;
VPagos::VPagos(wxWindow *parent) : VentanaPagos(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int cant_pagos= renta->CantidadPagos(); 
	grilla->AppendRows(cant_pagos); 
	for (int i=0;i<cant_pagos;i++) CargarFilaPagos(i);
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows); 
}

void VPagos::CargarFilaPagos(int i) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	Pago &p=renta->VerPago(i);
	
	grilla->SetCellValue(i,0,wxString()<<p.VerCodCliente());
	grilla->SetCellValue(i,1,wxString()<<p.VerMonto());
	grilla->SetCellValue(i,2,wxString()<<obtener_dia(p.VerFechaPago())<<"/"<<obtener_mes(p.VerFechaPago())<<"/"<<obtener_anio(p.VerFechaPago()));
}

void VPagos::ClickBuscar( wxCommandEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	long fechaPago;
	int res=renta->BuscarFechaPago(busqueda->GetValue().ToLong(&fechaPago));
	if (res==-1) 
		wxMessageBox("No se encontraron coincidencias");
	else {
		grilla->SetGridCursor(res,0); 
		grilla->SelectRow(res); 
	}
}

void VPagos::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarPago nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal()) 
		CargarFilaPagos(fila_actual); 
}

void VPagos::ClickGrilla( wxGridEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int columna=event.GetCol();
	int cant_pagos=renta->CantidadPagos();
	switch(columna) { 
	case 0: renta->OrdenarPagos(1); break;
	case 1: renta->OrdenarPagos(2); break;
	case 2: renta->OrdenarPagos(3); break;
	
	}
	for (int i=0;i<cant_pagos;i++) CargarFilaPagos(i); 
}

void VPagos::ClickAgregar( wxCommandEvent& event )  {
	DAgregarPago nueva_ventana(this); 
	if (nueva_ventana.ShowModal()==1) { 
		Renta *renta=Singleton::ObtenerInstancia(); 
		grilla->AppendRows(1); 
		int pos_nuevo = renta->CantidadPagos()-1;
		CargarFilaPagos(pos_nuevo); 
		grilla->SetGridCursor(pos_nuevo,0); 
		grilla->SelectRow(pos_nuevo); 
	}
}

void VPagos::ClickEditar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarPago nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal())
		CargarFilaPagos(fila_actual); 
}

void VPagos::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow();
	int res = wxMessageBox("Eliminar el registro?",grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if (res==wxYES) {
		grilla->DeleteRows(fila_actual,1);
		Renta *renta=Singleton::ObtenerInstancia(); 
		renta->EliminarPago(fila_actual);
		renta->GuardarPagos();
	}
}

VPagos::~VPagos() {
	
}

void VPagos::CambiaTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[3], ancho_total_viejo=0; 
	for (int i=0;i<3;i++) { 
		tamanios[i] = grilla->GetColSize(i);
		ancho_total_viejo += tamanios[i];
	}
	int ancho_total_nuevo=grilla->GetSize().GetWidth(); 
	grilla->BeginBatch(); 
	for (int i=0;i<3;i++) 
		grilla->SetColSize(i,tamanios[i]*ancho_total_nuevo/ancho_total_viejo);
	grilla->EndBatch();
}

void VPagos::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}


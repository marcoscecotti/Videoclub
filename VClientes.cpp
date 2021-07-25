#include "VClientes.h"
#include "../Videoclub/Cliente.h"
#include <wx/grid.h>
#include "../Videoclub/Renta.h"
#include <wx/msgdlg.h>
#include "DEditarCliente.h"
#include "DAgregarCliente.h"
#include <wx/wx.h>
#include <wx/string.h>
#include <string>
#include "Singleton.h"
using namespace std;
VClientes::VClientes(wxWindow *parent) : VentanaClientes(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int cant_clientes = renta->CantidadClientes(); 
	grilla->AppendRows(cant_clientes); 
	for (int i=0;i<cant_clientes;i++) CargarFilaClientes(i);
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows); 
}

void VClientes::CargarFilaClientes(int i){
	Renta *renta=Singleton::ObtenerInstancia(); 
	Cliente &c=renta->VerCliente(i);
	
	grilla->SetCellValue(i,0,wxString()<<c.VerCodCliente());
	grilla->SetCellValue(i,1,c.VerApellido()+", "+c.VerNombre());
	grilla->SetCellValue(i,2,c.VerLocalidad());
	grilla->SetCellValue(i,3,wxString()<<c.VerTelefono());
	grilla->SetCellValue(i,4,wxString()<<c.VerDeuda());
}

void VClientes::ClickBuscar( wxCommandEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	long codCliente;
	int res=renta->BuscarCodigoCliente(busqueda->GetValue().ToLong(&codCliente));
	if (res==-1) 
		wxMessageBox("No se encontraron coincidencias");
	else {
		grilla->SetGridCursor(res,0); 
		grilla->SelectRow(res); 
	}
}

void VClientes::DobleClickGrilla( wxGridEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarCliente nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal()) 
		CargarFilaClientes(fila_actual); 
}

void VClientes::ClickGrilla( wxGridEvent& event )  {
	
	Renta *renta=Singleton::ObtenerInstancia(); 
	int columna=event.GetCol();
	int cant_clientes=renta->CantidadClientes();
	switch(columna) { 
	case 0: renta->OrdenarClientes(1); break;
	case 1: renta->OrdenarClientes(2); break;
	case 2: renta->OrdenarClientes(5); break;
	case 3: renta->OrdenarClientes(3); break;
	case 4: renta->OrdenarClientes(4); break;
	}
	for (int i=0;i<cant_clientes;i++) CargarFilaClientes(i); 
	
}

void VClientes::ClickAgregar( wxCommandEvent& event )  {
	DAgregarCliente nueva_ventana(this); 
	if (nueva_ventana.ShowModal()==1) { 
		Renta *renta=Singleton::ObtenerInstancia(); 
		grilla->AppendRows(1); 
		int pos_nuevo = renta->CantidadClientes()-1;
		CargarFilaClientes(pos_nuevo); 
		grilla->SetGridCursor(pos_nuevo,0); 
		grilla->SelectRow(pos_nuevo); 
	}
}

void VClientes::ClickEditar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow(); 
	DEditarCliente nueva_ventana(this,fila_actual); 
	if (nueva_ventana.ShowModal())
		CargarFilaClientes(fila_actual); 
}

void VClientes::ClickEliminar( wxCommandEvent& event )  {
	int fila_actual = grilla->GetGridCursorRow();
	int res = wxMessageBox("Eliminar el registro?",grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if (res==wxYES) {
		grilla->DeleteRows(fila_actual,1);
		Renta *renta=Singleton::ObtenerInstancia(); 
		renta->EliminarCliente(fila_actual);
		renta->GuardarClientes();
	}
}

VClientes::~VClientes() {
	
}

void VClientes::CambiaTamanio( wxSizeEvent& event )  {
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

void VClientes::EnterBuscar( wxCommandEvent& event )  {
	ClickBuscar(event);
}


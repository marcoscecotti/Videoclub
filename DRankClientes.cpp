#include "DRankClientes.h"
#include "../Videoclub/Renta.h"
#include <vector>
#include "../Videoclub/Cliente.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include "Singleton.h"
using namespace std;

DRankClientes::DRankClientes(wxWindow *parent) : DialogRankClientes(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	vector<Cliente>v;
	v=renta->ObtenerRankingClientes();
	int tam=v.size();
	grilla->AppendRows(tam);
	for(int i=0;i<tam;i++) {
		Cliente c=v[i];
		grilla->SetCellValue(i,0,wxString()<<c.VerCodCliente());
		grilla->SetCellValue(i,1,c.VerApellido()+", "+c.VerNombre());
		grilla->SetCellValue(i,2,c.VerLocalidad());
		grilla->SetCellValue(i,3,wxString()<<c.VerTelefono());
		grilla->SetCellValue(i,4,wxString()<<c.VerDeuda());
	}
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows);	
}

DRankClientes::~DRankClientes() {
	
}

void DRankClientes::ClickGrilla( wxGridEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int columna=event.GetCol();
	vector<Cliente>v;
	v=renta->ObtenerRankingClientes();
	switch(columna) { 
	case 0: renta->OrdenarClientes(1); break;
	case 1: renta->OrdenarClientes(2); break;
	case 2: renta->OrdenarClientes(5); break;
	case 3: renta->OrdenarClientes(3); break;
	case 4: renta->OrdenarClientes(4); break;
	}
	for (int i=0;i<v.size();i++) {
		Cliente c=v[i];
		grilla->SetCellValue(i,0,wxString()<<c.VerCodCliente());
		grilla->SetCellValue(i,1,c.VerApellido()+", "+c.VerNombre());
		grilla->SetCellValue(i,2,c.VerLocalidad());
		grilla->SetCellValue(i,3,wxString()<<c.VerTelefono());
		grilla->SetCellValue(i,4,wxString()<<c.VerDeuda());
	}
}


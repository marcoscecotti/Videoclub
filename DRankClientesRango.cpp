#include "DRankClientesRango.h"
#include "../Videoclub/Renta.h"
#include <vector>
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/grid.h>
#include <wx/textctrl.h>
#include "Singleton.h"
using namespace std;

DRankClientesRango::DRankClientesRango(wxWindow *parent) : DialogRankClientesRango(parent) {
	
}

DRankClientesRango::~DRankClientesRango() {
	
}


void DRankClientesRango::ClickEnter1( wxCommandEvent& event )  {
	tx_rankfechahasta->SetFocus();
}

void DRankClientesRango::ClickEnter2( wxCommandEvent& event )  {
	long fechadesde;
	tx_rankfechadesde->GetValue().ToLong(&fechadesde);
	long fechahasta;
	tx_rankfechahasta->GetValue().ToLong(&fechahasta);
	Renta *renta=Singleton::ObtenerInstancia(); 
	vector<pair<int,int>> v;
	v=renta->ObtenerRankingClientesPorRango(fechadesde,fechahasta);
	int tam=v.size();
	grilla->AppendRows(tam);
	for(int i=0;i<tam;i++) {
		pair<int,int> p=v[i];
		grilla->SetCellValue(i,0,wxString()<<p.first);
		grilla->SetCellValue(i,1,wxString()<<p.second);
	}
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows); 
}


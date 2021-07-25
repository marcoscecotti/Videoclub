#include "DRankCatRango.h"
#include "../Videoclub/Renta.h"
#include <vector>
#include <wx/grid.h>
#include <wx/textctrl.h>
#include "Singleton.h"
using namespace std;

DRankCatRango::DRankCatRango(wxWindow *parent) : DialogRankCatRango(parent) {
	
}

DRankCatRango::~DRankCatRango() {
	
}


void DRankCatRango::ClickEnter1( wxCommandEvent& event )  {
	tx_rankfechahasta->SetFocus();
}

void DRankCatRango::ClickEnter2( wxCommandEvent& event )  {
	long fechadesde;
	tx_rankfechadesde->GetValue().ToLong(&fechadesde);
	long fechahasta;
	tx_rankfechahasta->GetValue().ToLong(&fechahasta);
	Renta *renta=Singleton::ObtenerInstancia(); 
	vector<pair<int,string>> v;
	v=renta->ObtenerRankingCategoriaPorRango(fechadesde,fechahasta);
	int tam=v.size();
	grilla->AppendRows(tam);
	for(int i=0;i<tam;i++) {
		pair<int,string> p=v[i];
		grilla->SetCellValue(i,0,wxString()<<p.first);
		grilla->SetCellValue(i,1,p.second);
	}
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows); 
}


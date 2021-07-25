#include "DRankPeliculas.h"
#include "../Videoclub/Renta.h"
#include <vector>
#include "../Videoclub/Pelicula.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
using namespace std;

DRankPeliculas::DRankPeliculas(wxWindow *parent) : DialogRankPeliculas(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	vector<Pelicula>v;
	v=renta->ObtenerRankingPeliculas();
	int tam=v.size();
	grilla->AppendRows(tam);
	for(int i=0;i<tam;i++) {
		Pelicula p=v[i];
		grilla->SetCellValue(i,0,wxString()<<p.VerCodPel());
		grilla->SetCellValue(i,1,p.VerNomPel());
		grilla->SetCellValue(i,2,p.VerCategoria());
		grilla->SetCellValue(i,3,wxString()<<obtener_dia(p.VerFechaEstreno())<<"/"<<obtener_mes(p.VerFechaEstreno())<<"/"<<obtener_anio(p.VerFechaEstreno()));
	}
	grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
}

DRankPeliculas::~DRankPeliculas() {
	
}

void DRankPeliculas::ClickGrilla( wxGridEvent& event )  {
	Renta *renta=Singleton::ObtenerInstancia(); 
	int columna=event.GetCol();
	vector<Pelicula>v;
	v=renta->ObtenerRankingPeliculas();
	int tam=v.size();
	switch(columna) { 
	case 0: renta->OrdenarPeliculas(1); break;
	case 1: renta->OrdenarPeliculas(2); break;
	case 2: renta->OrdenarPeliculas(4); break;
	case 3: renta->OrdenarPeliculas(3); break;
	}
	for (int i=0;i<tam;i++) {
		Pelicula p=v[i];
		grilla->SetCellValue(i,0,wxString()<<p.VerCodPel());
		grilla->SetCellValue(i,1,p.VerNomPel());
		grilla->SetCellValue(i,2,p.VerCategoria());
		grilla->SetCellValue(i,3,wxString()<<obtener_dia(p.VerFechaEstreno())<<"/"<<obtener_mes(p.VerFechaEstreno())<<"/"<<obtener_anio(p.VerFechaEstreno()));
	}
}


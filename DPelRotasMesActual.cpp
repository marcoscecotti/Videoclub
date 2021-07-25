#include "DPelRotasMesActual.h"
#include "../Videoclub/Renta.h"
#include <vector>
#include "../Videoclub/Pelicula.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/grid.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
using namespace std;
DPelRotasMesActual::DPelRotasMesActual(wxWindow *parent) : DialogPelRotasMesActual(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	vector<Pelicula>v;
	v=renta->ObtenerPeliculasRotasPorMes();
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

DPelRotasMesActual::~DPelRotasMesActual() {
	
}




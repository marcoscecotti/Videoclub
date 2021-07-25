#include "DEditarPelicula.h"
#include "../Videoclub/Renta.h"
#include "../Videoclub/Pelicula.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/textctrl.h>
#include <wx/button.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
#include <wx/choice.h>
using namespace std;

DEditarPelicula::DEditarPelicula(wxWindow *parent,int cual) : DialogEditarPelicula(parent) {
	indice_pelicula=cual;
	Renta *renta=Singleton::ObtenerInstancia(); 
	Pelicula &p=renta->VerPelicula(cual);
	if(p.VerCodPel()!=0) tx_codpel->SetValue(wxString()<<p.VerCodPel());
	tx_nompel->SetValue(p.VerNomPel());
	choiceCat->SetLabel(p.VerCategoria());
	choiceCalidad->SetLabel(p.VerCalidad());
	tx_descripcion->SetValue(p.VerDescripcion());
	if (obtener_anio(p.VerFechaEstreno())!=0) tx_anioestreno->SetValue(wxString()<<obtener_anio(p.VerFechaEstreno()));
	if (obtener_mes(p.VerFechaEstreno())!=0) tx_mesestreno->SetValue(wxString()<<obtener_mes(p.VerFechaEstreno()));
	if (obtener_dia(p.VerFechaEstreno())!=0) tx_diaestreno->SetValue(wxString()<<obtener_dia(p.VerFechaEstreno()));
	if (p.VerPrecio()!=0) tx_precio->SetValue(wxString()<<p.VerPrecio());
	if (p.VerCantidad()!=0) tx_cantidad->SetValue(wxString()<<p.VerCantidad());
	
	boton1->SetLabel("Aceptar");
	boton2->SetLabel("Cancelar");
	SetTitle("Editar Pelicula");
}

void DEditarPelicula::ClickBoton1( wxCommandEvent& event )  {
	long dia,mes,anio,precio,cantidad; 
	tx_diaestreno->GetValue().ToLong(&dia);
	tx_mesestreno->GetValue().ToLong(&mes);
	tx_anioestreno->GetValue().ToLong(&anio);
	int fecha=obtener_fecha_pegada(dia,mes,anio);
	tx_precio->GetValue().ToLong(&precio);
	tx_cantidad->GetValue().ToLong(&cantidad);
	Pelicula p( 
			   tx_nompel->GetValue().c_str(),
			   choiceCat->GetLabel().c_str(),
			   choiceCalidad->GetLabel().c_str(),
			   tx_descripcion->GetValue().c_str(),
			   fecha,precio,cantidad);
	string errores = p.ValidarDatosPelicula();
	if (errores.size()) 
		wxMessageBox(errores);
	else {
		Renta *renta=Singleton::ObtenerInstancia();
		renta->VerPelicula(indice_pelicula)=p; 
		renta->GuardarPeliculas(); 
		EndModal(1); 
	}
}

void DEditarPelicula::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DEditarPelicula::~DEditarPelicula() {
	
}


#include "DEditarAlquiler.h"
#include "../Videoclub/Alquiler.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/button.h>
#include <wx/textctrl.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"

using namespace std;
DEditarAlquiler::DEditarAlquiler(wxWindow *parent,int cual) : DialogEditarAlquiler(parent) {
	indice_alquiler=cual;
	Renta *renta=Singleton::ObtenerInstancia(); 
	Alquiler &a=renta->VerAlquiler(cual);
	if(a.VerCodAlquiler()!=0) tx_codalquiler->SetValue(wxString()<<a.VerCodAlquiler());
	if(a.VerCodCliente()!=0) tx_codcliente->SetValue(wxString()<<a.VerCodCliente());
	if(a.VerCodPel()!=0) tx_codpel->SetValue(wxString()<<a.VerCodPel());
	if (obtener_anio(a.VerFechaDesde())!=0) tx_aniodesde->SetValue(wxString()<<obtener_anio(a.VerFechaDesde()));
	if (obtener_mes(a.VerFechaDesde())!=0) tx_mesdesde->SetValue(wxString()<<obtener_mes(a.VerFechaDesde()));
	if (obtener_dia(a.VerFechaDesde())!=0) tx_diadesde->SetValue(wxString()<<obtener_dia(a.VerFechaDesde()));
	if (obtener_anio(a.VerFechaHasta())!=0) tx_aniohasta->SetValue(wxString()<<obtener_anio(a.VerFechaHasta()));
	if (obtener_mes(a.VerFechaHasta())!=0) tx_meshasta->SetValue(wxString()<<obtener_mes(a.VerFechaHasta()));
	if (obtener_dia(a.VerFechaHasta())!=0) tx_diahasta->SetValue(wxString()<<obtener_dia(a.VerFechaHasta()));
	if (a.VerPrecio()!=0) tx_precioalquiler->SetValue(wxString()<<a.VerPrecio());
	
	boton1->SetLabel("Aceptar");
	boton2->SetLabel("Cancelar");
	SetTitle("Editar Pago");
}

void DEditarAlquiler::ClickBoton1( wxCommandEvent& event )  {
	long codCliente,CodPel,precio; 
	tx_codcliente->GetValue().ToLong(&codCliente);
	tx_codpel->GetValue().ToLong(&CodPel);
	tx_precioalquiler->GetValue().ToLong(&precio);
	
	Alquiler a(codCliente,CodPel,precio);
	string errores = a.ValidarDatosAlquiler();
	if (errores.size()) 
		wxMessageBox(errores);
	else {
		Renta *renta=Singleton::ObtenerInstancia();
		renta->VerAlquiler(indice_alquiler)=a; 
		renta->GuardarAlquileres(); 
		EndModal(1); 
	}
}

void DEditarAlquiler::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DEditarAlquiler::~DEditarAlquiler() {
	
}


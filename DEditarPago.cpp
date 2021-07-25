#include "DEditarPago.h"
#include "../Videoclub/Renta.h"
#include "../Videoclub/Pago.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/textctrl.h>
#include <wx/button.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
using namespace std;
DEditarPago::DEditarPago(wxWindow *parent,int cual) : DialogEditarPago(parent) {
	indice_pago=cual;
	Renta *renta=Singleton::ObtenerInstancia(); 
	Pago &p=renta->VerPago(cual);
	if(p.VerCodCliente()!=0) tx_codcliente->SetValue(wxString()<<p.VerCodCliente());
	if(p.VerMonto()!=0) tx_monto->SetValue(wxString()<<p.VerMonto());
	if (obtener_anio(p.VerFechaPago())!=0) tx_aniopago->SetValue(wxString()<<obtener_anio(p.VerFechaPago()));
	if (obtener_mes(p.VerFechaPago())!=0) tx_mespago->SetValue(wxString()<<obtener_mes(p.VerFechaPago()));
	if (obtener_dia(p.VerFechaPago())!=0) tx_diapago->SetValue(wxString()<<obtener_dia(p.VerFechaPago()));
	
	boton1->SetLabel("Aceptar");
	boton2->SetLabel("Cancelar");
	SetTitle("Editar Pago");
}

void DEditarPago::ClickBoton1( wxCommandEvent& event )  {
	long codCliente,monto; 
	tx_codcliente->GetValue().ToLong(&codCliente);
	tx_monto->GetValue().ToLong(&monto);
	
	Pago p(codCliente,monto);
	string errores = p.ValidarDatosPago();
	if (errores.size()) 
		wxMessageBox(errores);
	else {
		Renta *renta=Singleton::ObtenerInstancia();
		renta->VerPago(indice_pago)=p; 
		renta->GuardarPagos(); 
		EndModal(1); 
	}
}

void DEditarPago::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DEditarPago::~DEditarPago() {
	
}


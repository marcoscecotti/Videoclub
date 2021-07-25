#include "DAgregarPago.h"
#include "../Videoclub/Pago.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/button.h>
#include <wx/textctrl.h>
#include "Singleton.h"

using namespace std;
DAgregarPago::DAgregarPago(wxWindow *parent) : DialogAgregarPago(parent) {
	SetTitle("Agregar"); 
	boton1->SetLabel("Agregar"); 
	boton2->SetLabel("Cancelar");
}

void DAgregarPago::ClickBoton1( wxCommandEvent& event )  {
	long codCliente,monto; 
	tx_codcliente->GetValue().ToLong(&codCliente);
	tx_monto->GetValue().ToLong(&monto);
	
	Pago p( codCliente,monto);
	string errores = p.ValidarDatosPago();
	if (errores.size()) 
		wxMessageBox(errores); 
	else {
		Renta *renta=Singleton::ObtenerInstancia(); 
		float pago=renta->AgregarPago(p);
		wxMessageBox(wxString()<<"El cliente debe $"<<pago);
		renta->GuardarPagos(); 
		EndModal(1);
	}
}

void DAgregarPago::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DAgregarPago::~DAgregarPago() {
	
}


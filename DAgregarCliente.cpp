#include "DAgregarCliente.h"
#include "../Videoclub/Cliente.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/textctrl.h>
#include <wx/button.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"

using namespace std;
DAgregarCliente::DAgregarCliente(wxWindow *parent) : DialogAgregarCliente(parent) {
	SetTitle("Agregar"); 
	boton1->SetLabel("Agregar"); 
	boton2->SetLabel("Cancelar");
}

void DAgregarCliente::ClickBoton1( wxCommandEvent& event )  {
	long dia,mes,anio,telefono; 
	tx_dianac->GetValue().ToLong(&dia);
	tx_mesnac->GetValue().ToLong(&mes);
	tx_anionac->GetValue().ToLong(&anio);
	tx_telefono->GetValue().ToLong(&telefono);
	int fecha=obtener_fecha_pegada(dia,mes,anio);
	tx_telefono->GetValue().ToLong(&telefono);
	Cliente c( 
			  tx_nomcliente->GetValue().c_str(),
			  tx_apellido->GetValue().c_str(),
			  choiceSexo->GetLabel().c_str(),
			  tx_localidad->GetValue().c_str(),
			  tx_direccion->GetValue().c_str(),
			  telefono, fecha);
	string errores = c.ValidarDatosCliente();
	if (errores.size()) 
		wxMessageBox(errores); 
	else {
		Renta *renta=Singleton::ObtenerInstancia(); 
		renta->AgregarCliente(c);
		renta->GuardarClientes(); 
		EndModal(1);
	}
}

void DAgregarCliente::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DAgregarCliente::~DAgregarCliente() {
	
}


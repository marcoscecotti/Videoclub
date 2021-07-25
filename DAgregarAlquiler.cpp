#include "DAgregarAlquiler.h"
#include "../Videoclub/Alquiler.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/textctrl.h>
#include <wx/button.h>
#include "Singleton.h"
using namespace std;

DAgregarAlquiler::DAgregarAlquiler(wxWindow *parent) : DialogAgregarAlquiler(parent) {
	SetTitle("Agregar"); 
	boton1->SetLabel("Agregar"); 
	boton2->SetLabel("Cancelar");
}

void DAgregarAlquiler::ClickBoton1( wxCommandEvent& event )  {
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
		renta->AgregarAlquiler(a);
		renta->GuardarAlquileres(); 
		EndModal(1);
	}
}

void DAgregarAlquiler::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DAgregarAlquiler::~DAgregarAlquiler() {
	
}


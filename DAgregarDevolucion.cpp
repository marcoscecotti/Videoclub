#include "DAgregarDevolucion.h"
#include "../Videoclub/Devolucion.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/textctrl.h>
#include <wx/button.h>
#include "Singleton.h"
#include <wx/choice.h>

using namespace std;

DAgregarDevolucion::DAgregarDevolucion(wxWindow *parent) : DialogAgregarDevolucion(parent) {
	SetTitle("Agregar"); 
	boton1->SetLabel("Agregar"); 
	boton2->SetLabel("Cancelar");
}

void DAgregarDevolucion::ClickBoton1( wxCommandEvent& event )  {
	long codAlquiler,estado; 
	tx_codalquiler->GetValue().ToLong(&codAlquiler);
	
	Devolucion d(codAlquiler,choiceEstado->GetLabel().c_str());
	string errores = d.ValidarDatosDevolucion();
	if (errores.size()) 
		wxMessageBox(errores); 
	else {
		Renta *renta=Singleton::ObtenerInstancia(); 
		float precio=renta->AgregarDevolucion(d);
		wxMessageBox(wxString()<<"El cliente debe $"<<precio);
		renta->GuardarPeliculas(); 
		EndModal(1);
	}
}

void DAgregarDevolucion::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DAgregarDevolucion::~DAgregarDevolucion() {
	
}


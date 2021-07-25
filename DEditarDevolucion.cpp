#include "DEditarDevolucion.h"
#include "../Videoclub/Devolucion.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/textctrl.h>
#include <wx/button.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
#include <wx/choice.h>
using namespace std;
DEditarDevolucion::DEditarDevolucion(wxWindow *parent, int cual) : DialogEditarDevolucion(parent) {
	indice_devolucion=cual;
	Renta *renta=Singleton::ObtenerInstancia(); 
	Devolucion &d=renta->VerDevolucion(cual);
	if(d.VerCodDevolucion()!=0) tx_coddevolucion->SetValue(wxString()<<d.VerCodDevolucion());
	if(d.VerCodAlquiler()!=0) tx_codalquiler->SetValue(wxString()<<d.VerCodAlquiler());
	choiceEstado->SetLabel(d.VerEstado());
	if (obtener_anio(d.VerFechaDevolucion())!=0) tx_aniodevolucion->SetValue(wxString()<<obtener_anio(d.VerFechaDevolucion()));
	if (obtener_mes(d.VerFechaDevolucion())!=0) tx_mesdevolucion->SetValue(wxString()<<obtener_mes(d.VerFechaDevolucion()));
	if (obtener_dia(d.VerFechaDevolucion())!=0) tx_diadevolucion->SetValue(wxString()<<obtener_dia(d.VerFechaDevolucion()));
	
	boton1->SetLabel("Aceptar");
	boton2->SetLabel("Cancelar");
	SetTitle("Editar Pago");
}

void DEditarDevolucion::ClickBoton1( wxCommandEvent& event )  {
	long codAlquiler,estado; 
	tx_codalquiler->GetValue().ToLong(&codAlquiler);
	
	Devolucion d(codAlquiler,choiceEstado->GetLabel().c_str());
	string errores = d.ValidarDatosDevolucion();
	if (errores.size()) 
		wxMessageBox(errores);
	else {
		Renta *renta=Singleton::ObtenerInstancia();
		renta->VerDevolucion(indice_devolucion)=d; 
		renta->GuardarDevoluciones(); 
		EndModal(1); 
	}
}

void DEditarDevolucion::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DEditarDevolucion::~DEditarDevolucion() {
	
}


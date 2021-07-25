#include "DEditarCliente.h"
#include "../Videoclub/Renta.h"
#include "../Videoclub/Cliente.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/textctrl.h>
#include <wx/button.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
#include <wx/choice.h>
using namespace std;
DEditarCliente::DEditarCliente(wxWindow *parent,int cual) : DialogEditarCliente(parent) {
	indice_cliente=cual;
	Renta *renta=Singleton::ObtenerInstancia(); 
	Cliente &c=renta->VerCliente(cual);
	if(c.VerCodCliente()!=0) tx_codcliente->SetValue(wxString()<<c.VerCodCliente());
	tx_nomcliente->SetValue(c.VerNombre());
	tx_apellido->SetValue(c.VerApellido());
	choiceSexo->SetLabel(c.VerSexo());
	tx_localidad->SetValue(c.VerLocalidad());
	tx_direccion->SetValue(c.VerDireccion());
	if (c.VerTelefono()!=0) tx_telefono->SetValue(wxString()<<c.VerTelefono());
	if (obtener_anio(c.VerFechaNac())!=0) tx_anionac->SetValue(wxString()<<obtener_anio(c.VerFechaNac()));
	if (obtener_mes(c.VerFechaNac())!=0) tx_mesnac->SetValue(wxString()<<obtener_mes(c.VerFechaNac()));
	//if (obtener_dia(c.VerFechaNac()!=0)) 
	tx_dianac->SetValue(wxString()<<obtener_dia(c.VerFechaNac()));
	boton1->SetLabel("Aceptar");
	boton2->SetLabel("Cancelar");
	SetTitle("Editar Cliente");
}

void DEditarCliente::ClickBoton1( wxCommandEvent& event )  {
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
		renta->VerCliente(indice_cliente)=c; 
		renta->GuardarClientes(); 
		EndModal(1); 
	}
}

void DEditarCliente::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DEditarCliente::~DEditarCliente() {
	
}


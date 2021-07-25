#include "DAgregarPelicula.h"
#include "../Videoclub/Pelicula.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <wx/msgdlg.h>
#include <string>
#include <wx/button.h>
#include <wx/textctrl.h>
#include "Singleton.h"
#include "../Videoclub/Utilidades.h"
#include <wx/choice.h>

using namespace std;
DAgregarPelicula::DAgregarPelicula(wxWindow *parent) : DialogAgregarPelicula(parent) {
	SetTitle("Agregar"); 
	boton1->SetLabel("Agregar"); 
	boton2->SetLabel("Cancelar");
}

void DAgregarPelicula::ClickBoton1( wxCommandEvent& event )  {
	long dia,mes,anio,precio,cantidad; 
	tx_diaestreno->GetValue().ToLong(&dia);
	tx_mesestreno->GetValue().ToLong(&mes);
	tx_anioestreno->GetValue().ToLong(&anio);
	int fecha=obtener_fecha_pegada(dia,mes,anio);
	tx_preciopel->GetValue().ToLong(&precio);
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
		renta->AgregarPelicula(p);
		renta->GuardarPeliculas(); 
		EndModal(1);
	}
}

void DAgregarPelicula::ClickBoton2( wxCommandEvent& event )  {
	EndModal(0);
}

DAgregarPelicula::~DAgregarPelicula() {
	
}


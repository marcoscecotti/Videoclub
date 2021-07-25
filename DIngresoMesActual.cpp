#include "DIngresoMesActual.h"
#include "../Videoclub/Renta.h"
#include <wx/string.h>
#include <string>
#include <wx/textctrl.h>
#include "Singleton.h"
using namespace std;
DIngresoMesActual::DIngresoMesActual(wxWindow *parent) : DialogIngresoMesActual(parent) {
	Renta *renta=Singleton::ObtenerInstancia(); 
	float ingreso=renta->ObtenerIngresoPorMesActual();
	tx_ingresomes->SetValue(wxString()<<ingreso);
}

DIngresoMesActual::~DIngresoMesActual() {
	
}


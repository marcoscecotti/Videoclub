#include "VEstadisticas.h"
#include "DRankPeliculas.h"
#include "DRankClientes.h"
#include "DIngresoMesActual.h"
#include "DPelRotasMesActual.h"
#include "DRankClientesRango.h"
#include "DRankCatRango.h"
#include "Singleton.h"
using namespace std;

VEstadisticas::VEstadisticas(wxWindow *parent) : VentanaEstadisticas(parent) {
	Show();
}

void VEstadisticas::ClickRankPel( wxCommandEvent& event )  {
	DRankPeliculas *nueva_ventana = new DRankPeliculas(this);
	nueva_ventana->Show();
}

void VEstadisticas::ClickRankClientes( wxCommandEvent& event )  {
	DRankClientes *nueva_ventana = new DRankClientes(this);
	nueva_ventana->Show();
}

void VEstadisticas::ClickIngresoMes( wxCommandEvent& event )  {
	DIngresoMesActual *nueva_ventana = new DIngresoMesActual(this);
	nueva_ventana->Show();
}

void VEstadisticas::ClickPelRotas( wxCommandEvent& event )  {
	DPelRotasMesActual *nueva_ventana = new DPelRotasMesActual(this);
	nueva_ventana->Show();
}

void VEstadisticas::ClickRankClientesRango( wxCommandEvent& event )  {
	DRankClientesRango *nueva_ventana = new DRankClientesRango(this);
	nueva_ventana->Show();
}

void VEstadisticas::ClickRankCatRango( wxCommandEvent& event )  {
	DRankCatRango *nueva_ventana = new DRankCatRango(this);
	nueva_ventana->Show();
}

VEstadisticas::~VEstadisticas() {
	
}




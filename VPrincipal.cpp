#include "VPrincipal.h"
#include "VPeliculas.h"
#include "VClientes.h"
#include "VAlquileres.h"
#include "VDevoluciones.h"
#include "VEstadisticas.h"
#include "VPagos.h"
#include "Singleton.h"
using namespace std;

VPrincipal::VPrincipal(wxWindow *parent) : VentanaPrincipal(parent) {
	Show();
}

void VPrincipal::AbrirPeliculas( wxCommandEvent& event )  {
	VPeliculas *p = new VPeliculas(this);
	p->Show();
}

void VPrincipal::AbrirClientes( wxCommandEvent& event )  {
	VClientes *c = new VClientes(this);
	c->Show();
}

void VPrincipal::AbrirAlquileres( wxCommandEvent& event )  {
	VAlquileres *a = new VAlquileres(this);
	a->Show();
}

void VPrincipal::AbrirDevoluciones( wxCommandEvent& event )  {
	VDevoluciones *d = new VDevoluciones(this);
	d->Show();
}

void VPrincipal::AbrirEstadisticas( wxCommandEvent& event )  {
	VEstadisticas *e = new VEstadisticas(this);
	e->Show();
}

void VPrincipal::AbrirPagos( wxCommandEvent& event )  {
	VPagos *p = new VPagos(this);
	p->Show();
}

VPrincipal::~VPrincipal() {
	
}


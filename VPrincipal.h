#ifndef VPRINCIPAL_H
#define VPRINCIPAL_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>

class VPrincipal : public VentanaPrincipal {
	
private:
	
protected:
	void AbrirPeliculas( wxCommandEvent& event ) ;
	void AbrirClientes( wxCommandEvent& event ) ;
	void AbrirAlquileres( wxCommandEvent& event ) ;
	void AbrirDevoluciones( wxCommandEvent& event ) ;
	void AbrirEstadisticas( wxCommandEvent& event ) ;
	void AbrirPagos( wxCommandEvent& event ) ;
	
public:
	VPrincipal(wxWindow *parent=NULL);
	~VPrincipal();
};

#endif


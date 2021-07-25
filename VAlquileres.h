#ifndef VALQUILERES_H
#define VALQUILERES_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>

class VAlquileres : public VentanaAlquileres {
	
private:
	void CargarFilaAlquileres(int i);
protected:
	void CambiaTamanio( wxSizeEvent& event ) ;
	void EnterBuscar( wxCommandEvent& event ) ;
	void ClickBuscar( wxCommandEvent& event ) ;
	void DobleClickGrilla( wxGridEvent& event ) ;
	void ClickGrilla( wxGridEvent& event ) ;
	void ClickAgregar( wxCommandEvent& event ) ;
	void ClickEditar( wxCommandEvent& event ) ;
	void ClickEliminar( wxCommandEvent& event ) ;
	
public:
	VAlquileres(wxWindow *parent=NULL);
	~VAlquileres();
};

#endif


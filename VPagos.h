#ifndef VPAGOS_H
#define VPAGOS_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>
#include <wx/grid.h>

class VPagos : public VentanaPagos {
	
private:
	void CargarFilaPagos(int i);
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
	VPagos(wxWindow *parent=NULL);
	~VPagos();
};

#endif


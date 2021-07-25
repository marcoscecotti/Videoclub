#ifndef VCLIENTES_H
#define VCLIENTES_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>

class VClientes : public VentanaClientes {
	
private:
	void CargarFilaClientes(int i);
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
	VClientes(wxWindow *parent=NULL);
	~VClientes();
};

#endif


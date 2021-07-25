#ifndef VDEVOLUCIONES_H
#define VDEVOLUCIONES_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>
#include <wx/grid.h>

class VDevoluciones : public VentanaDevoluciones {
	
private:
	void CargarFilaDevoluciones(int i);
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
	VDevoluciones(wxWindow *parent=NULL);
	~VDevoluciones();
};

#endif


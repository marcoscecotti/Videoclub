#ifndef VPELICULAS_H
#define VPELICULAS_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>
#include <wx/grid.h>

class VPeliculas : public VentanaPeliculas {
	
private:
	void CargarFilaPeliculas(int i);
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
	VPeliculas(wxWindow *parent=NULL);
	~VPeliculas();
};

#endif


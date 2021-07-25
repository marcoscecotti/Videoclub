#ifndef DEDITARDEVOLUCION_H
#define DEDITARDEVOLUCION_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DEditarDevolucion : public DialogEditarDevolucion {
	
private:
	int indice_devolucion;
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DEditarDevolucion(wxWindow *parent,int cual);
	~DEditarDevolucion();
};

#endif


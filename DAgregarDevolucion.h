#ifndef DAGREGARDEVOLUCION_H
#define DAGREGARDEVOLUCION_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DAgregarDevolucion : public DialogAgregarDevolucion {
	
private:
	
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DAgregarDevolucion(wxWindow *parent=NULL);
	~DAgregarDevolucion();
};

#endif


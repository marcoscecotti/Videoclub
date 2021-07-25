#ifndef DAGREGARPELICULA_H
#define DAGREGARPELICULA_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DAgregarPelicula : public DialogAgregarPelicula {
	
private:
	
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DAgregarPelicula(wxWindow *parent=NULL);
	~DAgregarPelicula();
};

#endif


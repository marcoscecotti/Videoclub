#ifndef DEDITARPELICULA_H
#define DEDITARPELICULA_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>

class DEditarPelicula : public DialogEditarPelicula {
	
private:
	int indice_pelicula;
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DEditarPelicula(wxWindow *parent,int cual);
	~DEditarPelicula();
};

#endif


#ifndef DEDITARALQUILER_H
#define DEDITARALQUILER_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DEditarAlquiler : public DialogEditarAlquiler {
	
private:
	int indice_alquiler;
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DEditarAlquiler(wxWindow *parent,int cual);
	~DEditarAlquiler();
};

#endif


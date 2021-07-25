#ifndef DAGREGARALQUILER_H
#define DAGREGARALQUILER_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DAgregarAlquiler : public DialogAgregarAlquiler {
	
private:
	
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DAgregarAlquiler(wxWindow *parent=NULL);
	~DAgregarAlquiler();
};

#endif


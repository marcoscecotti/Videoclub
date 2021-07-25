#ifndef DAGREGARCLIENTE_H
#define DAGREGARCLIENTE_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DAgregarCliente : public DialogAgregarCliente {
	
private:
	
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DAgregarCliente(wxWindow *parent=NULL);
	~DAgregarCliente();
};

#endif


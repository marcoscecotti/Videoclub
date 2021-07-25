#ifndef DAGREGARPAGO_H
#define DAGREGARPAGO_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DAgregarPago : public DialogAgregarPago {
	
private:
	
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DAgregarPago(wxWindow *parent=NULL);
	~DAgregarPago();
};

#endif


#ifndef DEDITARPAGO_H
#define DEDITARPAGO_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DEditarPago : public DialogEditarPago {
	
private:
	int indice_pago;
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DEditarPago(wxWindow *parent,int cual);
	~DEditarPago();
};

#endif


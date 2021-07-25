#ifndef DEDITARCLIENTE_H
#define DEDITARCLIENTE_H
#include "wxfbWindows.h"
#include <wx/window.h>
#include <wx/event.h>
class DEditarCliente : public DialogEditarCliente {
	
private:
	int indice_cliente;
protected:
	void ClickBoton1( wxCommandEvent& event ) ;
	void ClickBoton2( wxCommandEvent& event ) ;
	
public:
	DEditarCliente(wxWindow *parent,int cual);
	~DEditarCliente();
};

#endif


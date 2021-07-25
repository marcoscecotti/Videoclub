#ifndef VESTADISTICAS_H
#define VESTADISTICAS_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>

class VEstadisticas : public VentanaEstadisticas {
	
private:
	
protected:
	void ClickRankPel( wxCommandEvent& event ) ;
	void ClickRankClientes( wxCommandEvent& event ) ;
	void ClickIngresoMes( wxCommandEvent& event ) ;
	void ClickPelRotas( wxCommandEvent& event ) ;
	void ClickRankClientesRango( wxCommandEvent& event ) ;
	void ClickRankCatRango( wxCommandEvent& event ) ;
	
public:
	VEstadisticas(wxWindow *parent=NULL);
	~VEstadisticas();
};

#endif


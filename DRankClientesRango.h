#ifndef DRANKCLIENTESRANGO_H
#define DRANKCLIENTESRANGO_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>

class DRankClientesRango : public DialogRankClientesRango {
	
private:
	
protected:
	void ClickEnter1( wxCommandEvent& event ) ;
	void ClickEnter2( wxCommandEvent& event ) ;
	
public:
	DRankClientesRango(wxWindow *parent=NULL);
	~DRankClientesRango();
};

#endif


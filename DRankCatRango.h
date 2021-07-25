#ifndef DRANKCATRANGO_H
#define DRANKCATRANGO_H
#include "wxfbWindows.h"
#include <wx/event.h>
#include <wx/window.h>

class DRankCatRango : public DialogRankCatRango {
	
private:
	
protected:
	void ClickEnter1( wxCommandEvent& event ) ;
	void ClickEnter2( wxCommandEvent& event ) ;
	
	
public:
	DRankCatRango(wxWindow *parent=NULL);
	~DRankCatRango();
};

#endif


#ifndef DRANKCLIENTES_H
#define DRANKCLIENTES_H
#include "wxfbWindows.h"
#include <wx/grid.h>
#include <wx/window.h>

class DRankClientes : public DialogRankClientes {
	
private:
	
protected:
	void ClickGrilla( wxGridEvent& event ) ;
	
public:
	DRankClientes(wxWindow *parent=NULL);
	~DRankClientes();
};

#endif


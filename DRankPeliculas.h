#ifndef DRANKPELICULAS_H
#define DRANKPELICULAS_H
#include "wxfbWindows.h"
#include <wx/grid.h>
#include <wx/window.h>

class DRankPeliculas : public DialogRankPeliculas {
	
private:
	
protected:
	void ClickGrilla( wxGridEvent& event ) ;
	
public:
	DRankPeliculas(wxWindow *parent=NULL);
	~DRankPeliculas();
};

#endif


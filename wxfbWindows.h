///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFBWINDOWS_H__
#define __WXFBWINDOWS_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/choice.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class VentanaPrincipal
///////////////////////////////////////////////////////////////////////////////
class VentanaPrincipal : public wxFrame 
{
	private:
	
	protected:
		wxButton* Peliculas;
		wxButton* Clientes;
		wxButton* Alquileres;
		wxButton* Devoluciones;
		wxButton* Estadisticas;
		wxButton* Pagos;
		
		// Virtual event handlers, overide them in your derived class
		virtual void AbrirPeliculas( wxCommandEvent& event ) { event.Skip(); }
		virtual void AbrirClientes( wxCommandEvent& event ) { event.Skip(); }
		virtual void AbrirAlquileres( wxCommandEvent& event ) { event.Skip(); }
		virtual void AbrirDevoluciones( wxCommandEvent& event ) { event.Skip(); }
		virtual void AbrirEstadisticas( wxCommandEvent& event ) { event.Skip(); }
		virtual void AbrirPagos( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		VentanaPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Videoclub"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 328,283 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~VentanaPrincipal();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaPeliculas
///////////////////////////////////////////////////////////////////////////////
class VentanaPeliculas : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* busqueda;
		wxButton* m_button9;
		wxGrid* grilla;
		wxButton* m_button13;
		wxButton* m_button14;
		wxButton* m_button15;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		VentanaPeliculas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~VentanaPeliculas();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAgregarPelicula
///////////////////////////////////////////////////////////////////////////////
class DialogAgregarPelicula : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText5;
		wxTextCtrl* tx_nompel;
		wxStaticText* m_staticText6;
		wxChoice* choiceCat;
		wxStaticText* m_staticText7;
		wxChoice* choiceCalidad;
		wxStaticText* m_staticText8;
		wxTextCtrl* tx_descripcion;
		wxStaticText* m_staticText9;
		wxTextCtrl* tx_diaestreno;
		wxStaticText* m_staticText10;
		wxTextCtrl* tx_mesestreno;
		wxStaticText* m_staticText11;
		wxTextCtrl* tx_anioestreno;
		wxStaticText* m_staticText12;
		wxTextCtrl* tx_preciopel;
		wxStaticText* m_staticText13;
		wxTextCtrl* tx_cantidad;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogAgregarPelicula( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogAgregarPelicula();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogEditarPelicula
///////////////////////////////////////////////////////////////////////////////
class DialogEditarPelicula : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText48;
		wxTextCtrl* tx_codpel;
		wxStaticText* m_staticText5;
		wxTextCtrl* tx_nompel;
		wxStaticText* m_staticText6;
		wxChoice* choiceCat;
		wxStaticText* m_staticText7;
		wxChoice* choiceCalidad;
		wxStaticText* m_staticText8;
		wxTextCtrl* tx_descripcion;
		wxStaticText* m_staticText9;
		wxTextCtrl* tx_diaestreno;
		wxStaticText* m_staticText10;
		wxTextCtrl* tx_mesestreno;
		wxStaticText* m_staticText11;
		wxTextCtrl* tx_anioestreno;
		wxStaticText* m_staticText12;
		wxTextCtrl* tx_precio;
		wxStaticText* m_staticText13;
		wxTextCtrl* tx_cantidad;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogEditarPelicula( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogEditarPelicula();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaClientes
///////////////////////////////////////////////////////////////////////////////
class VentanaClientes : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText11;
		wxTextCtrl* busqueda;
		wxButton* m_button11;
		wxGrid* grilla;
		wxButton* m_button15;
		wxButton* m_button16;
		wxButton* m_button17;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		VentanaClientes( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~VentanaClientes();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAgregarCliente
///////////////////////////////////////////////////////////////////////////////
class DialogAgregarCliente : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_nomcliente;
		wxStaticText* m_staticText50;
		wxTextCtrl* tx_apellido;
		wxStaticText* m_staticText51;
		wxChoice* choiceSexo;
		wxStaticText* m_staticText52;
		wxTextCtrl* tx_localidad;
		wxStaticText* m_staticText53;
		wxTextCtrl* tx_direccion;
		wxStaticText* m_staticText54;
		wxTextCtrl* tx_telefono;
		wxStaticText* m_staticText55;
		wxTextCtrl* tx_dianac;
		wxStaticText* m_staticText56;
		wxTextCtrl* tx_mesnac;
		wxStaticText* m_staticText57;
		wxTextCtrl* tx_anionac;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogAgregarCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogAgregarCliente();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogEditarCliente
///////////////////////////////////////////////////////////////////////////////
class DialogEditarCliente : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText76;
		wxTextCtrl* tx_codcliente;
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_nomcliente;
		wxStaticText* m_staticText50;
		wxTextCtrl* tx_apellido;
		wxStaticText* m_staticText51;
		wxChoice* choiceSexo;
		wxStaticText* m_staticText52;
		wxTextCtrl* tx_localidad;
		wxStaticText* m_staticText53;
		wxTextCtrl* tx_direccion;
		wxStaticText* m_staticText54;
		wxTextCtrl* tx_telefono;
		wxStaticText* m_staticText55;
		wxTextCtrl* tx_dianac;
		wxStaticText* m_staticText56;
		wxTextCtrl* tx_mesnac;
		wxStaticText* m_staticText57;
		wxTextCtrl* tx_anionac;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogEditarCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogEditarCliente();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaAlquileres
///////////////////////////////////////////////////////////////////////////////
class VentanaAlquileres : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText11;
		wxTextCtrl* busqueda;
		wxButton* m_button11;
		wxGrid* grilla;
		wxButton* m_button15;
		wxButton* m_button16;
		wxButton* m_button17;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		VentanaAlquileres( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~VentanaAlquileres();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAgregarAlquiler
///////////////////////////////////////////////////////////////////////////////
class DialogAgregarAlquiler : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_codcliente;
		wxStaticText* m_staticText50;
		wxTextCtrl* tx_codpel;
		wxStaticText* m_staticText51;
		wxTextCtrl* tx_precioalquiler;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogAgregarAlquiler( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogAgregarAlquiler();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogEditarAlquiler
///////////////////////////////////////////////////////////////////////////////
class DialogEditarAlquiler : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText69;
		wxTextCtrl* tx_codalquiler;
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_codcliente;
		wxStaticText* m_staticText50;
		wxTextCtrl* tx_codpel;
		wxStaticText* m_staticText62;
		wxTextCtrl* tx_diadesde;
		wxStaticText* m_staticText64;
		wxTextCtrl* tx_mesdesde;
		wxStaticText* m_staticText65;
		wxTextCtrl* tx_aniodesde;
		wxStaticText* m_staticText63;
		wxTextCtrl* tx_diahasta;
		wxStaticText* m_staticText66;
		wxTextCtrl* tx_meshasta;
		wxStaticText* m_staticText67;
		wxTextCtrl* tx_aniohasta;
		wxStaticText* m_staticText51;
		wxTextCtrl* tx_precioalquiler;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogEditarAlquiler( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogEditarAlquiler();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaDevoluciones
///////////////////////////////////////////////////////////////////////////////
class VentanaDevoluciones : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText11;
		wxTextCtrl* busqueda;
		wxButton* m_button11;
		wxGrid* grilla;
		wxButton* m_button15;
		wxButton* m_button16;
		wxButton* m_button17;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		VentanaDevoluciones( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~VentanaDevoluciones();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAgregarDevolucion
///////////////////////////////////////////////////////////////////////////////
class DialogAgregarDevolucion : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_codalquiler;
		wxStaticText* m_staticText50;
		wxChoice* choiceEstado;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogAgregarDevolucion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogAgregarDevolucion();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogEditarDevolucion
///////////////////////////////////////////////////////////////////////////////
class DialogEditarDevolucion : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText61;
		wxTextCtrl* tx_coddevolucion;
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_codalquiler;
		wxStaticText* m_staticText50;
		wxChoice* choiceEstado;
		wxStaticText* m_staticText68;
		wxTextCtrl* tx_diadevolucion;
		wxStaticText* m_staticText69;
		wxTextCtrl* tx_mesdevolucion;
		wxStaticText* m_staticText70;
		wxTextCtrl* tx_aniodevolucion;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogEditarDevolucion( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogEditarDevolucion();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaPagos
///////////////////////////////////////////////////////////////////////////////
class VentanaPagos : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText11;
		wxTextCtrl* busqueda;
		wxButton* m_button11;
		wxGrid* grilla;
		wxButton* m_button15;
		wxButton* m_button16;
		wxButton* m_button17;
		
		// Virtual event handlers, overide them in your derived class
		virtual void CambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void EnterBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void DobleClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void ClickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEditar( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEliminar( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		VentanaPagos( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~VentanaPagos();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAgregarPago
///////////////////////////////////////////////////////////////////////////////
class DialogAgregarPago : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText61;
		wxTextCtrl* tx_codcliente;
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_monto;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogAgregarPago( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogAgregarPago();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogEditarPago
///////////////////////////////////////////////////////////////////////////////
class DialogEditarPago : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText61;
		wxTextCtrl* tx_codcliente;
		wxStaticText* m_staticText49;
		wxTextCtrl* tx_monto;
		wxStaticText* m_staticText66;
		wxTextCtrl* tx_diapago;
		wxStaticText* m_staticText71;
		wxTextCtrl* tx_mespago;
		wxStaticText* m_staticText72;
		wxTextCtrl* tx_aniopago;
		wxButton* boton1;
		wxButton* boton2;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickBoton1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickBoton2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogEditarPago( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogEditarPago();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class VentanaEstadisticas
///////////////////////////////////////////////////////////////////////////////
class VentanaEstadisticas : public wxFrame 
{
	private:
	
	protected:
		wxButton* m_button51;
		wxButton* m_button52;
		wxButton* m_button53;
		wxButton* m_button56;
		wxButton* m_button54;
		wxButton* m_button55;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickRankPel( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickRankClientes( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickIngresoMes( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickPelRotas( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickRankClientesRango( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickRankCatRango( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		VentanaEstadisticas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~VentanaEstadisticas();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogRankPeliculas
///////////////////////////////////////////////////////////////////////////////
class DialogRankPeliculas : public wxDialog 
{
	private:
	
	protected:
		wxGrid* grilla;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogRankPeliculas( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogRankPeliculas();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogRankClientes
///////////////////////////////////////////////////////////////////////////////
class DialogRankClientes : public wxDialog 
{
	private:
	
	protected:
		wxGrid* grilla;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickGrilla( wxGridEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogRankClientes( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogRankClientes();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogIngresoMesActual
///////////////////////////////////////////////////////////////////////////////
class DialogIngresoMesActual : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText67;
		wxTextCtrl* tx_ingresomes;
	
	public:
		
		DialogIngresoMesActual( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogIngresoMesActual();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogPelRotasMesActual
///////////////////////////////////////////////////////////////////////////////
class DialogPelRotasMesActual : public wxDialog 
{
	private:
	
	protected:
		wxGrid* grilla;
	
	public:
		
		DialogPelRotasMesActual( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogPelRotasMesActual();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogRankClientesRango
///////////////////////////////////////////////////////////////////////////////
class DialogRankClientesRango : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText75;
		wxTextCtrl* tx_rankfechadesde;
		wxStaticText* m_staticText76;
		wxTextCtrl* tx_rankfechahasta;
		wxGrid* grilla;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickEnter1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEnter2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogRankClientesRango( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogRankClientesRango();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogRankCatRango
///////////////////////////////////////////////////////////////////////////////
class DialogRankCatRango : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText77;
		wxTextCtrl* tx_rankfechadesde;
		wxStaticText* m_staticText78;
		wxTextCtrl* tx_rankfechahasta;
		wxGrid* grilla;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickEnter1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ClickEnter2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		DialogRankCatRango( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~DialogRankCatRango();
	
};

#endif //__WXFBWINDOWS_H__

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfbWindows.h"

///////////////////////////////////////////////////////////////////////////

VentanaPrincipal::VentanaPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer85;
	bSizer85 = new wxBoxSizer( wxHORIZONTAL );
	
	Peliculas = new wxButton( this, wxID_ANY, wxT("Peliculas"), wxDefaultPosition, wxSize( 150,75 ), 0 );
	bSizer85->Add( Peliculas, 0, wxALL, 5 );
	
	Clientes = new wxButton( this, wxID_ANY, wxT("Clientes"), wxDefaultPosition, wxSize( 150,75 ), 0 );
	bSizer85->Add( Clientes, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer85, 0, 0, 5 );
	
	wxBoxSizer* bSizer86;
	bSizer86 = new wxBoxSizer( wxHORIZONTAL );
	
	Alquileres = new wxButton( this, wxID_ANY, wxT("Alquileres"), wxDefaultPosition, wxSize( 150,75 ), 0 );
	bSizer86->Add( Alquileres, 0, wxALL, 5 );
	
	Devoluciones = new wxButton( this, wxID_ANY, wxT("Devoluciones"), wxDefaultPosition, wxSize( 150,75 ), 0 );
	bSizer86->Add( Devoluciones, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer86, 0, 0, 5 );
	
	wxBoxSizer* bSizer87;
	bSizer87 = new wxBoxSizer( wxHORIZONTAL );
	
	Estadisticas = new wxButton( this, wxID_ANY, wxT("Estadisticas"), wxDefaultPosition, wxSize( 150,75 ), 0 );
	bSizer87->Add( Estadisticas, 0, wxALL, 5 );
	
	Pagos = new wxButton( this, wxID_ANY, wxT("Pagos"), wxDefaultPosition, wxSize( 150,75 ), 0 );
	bSizer87->Add( Pagos, 0, wxALL, 5 );
	
	
	bSizer2->Add( bSizer87, 0, 0, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Peliculas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirPeliculas ), NULL, this );
	Clientes->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirClientes ), NULL, this );
	Alquileres->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirAlquileres ), NULL, this );
	Devoluciones->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirDevoluciones ), NULL, this );
	Estadisticas->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirEstadisticas ), NULL, this );
	Pagos->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirPagos ), NULL, this );
}

VentanaPrincipal::~VentanaPrincipal()
{
	// Disconnect Events
	Peliculas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirPeliculas ), NULL, this );
	Clientes->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirClientes ), NULL, this );
	Alquileres->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirAlquileres ), NULL, this );
	Devoluciones->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirDevoluciones ), NULL, this );
	Estadisticas->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirEstadisticas ), NULL, this );
	Pagos->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::AbrirPagos ), NULL, this );
	
}

VentanaPeliculas::VentanaPeliculas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Codigo de pelicula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer4->Add( m_staticText3, 0, wxALL, 5 );
	
	busqueda = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( busqueda, 1, wxALL, 5 );
	
	m_button9 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_button9, 0, wxALL, 5 );
	
	
	bSizer3->Add( bSizer4, 0, wxEXPAND, 5 );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 0, 4 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 80 );
	grilla->SetColSize( 1, 250 );
	grilla->SetColSize( 2, 180 );
	grilla->SetColSize( 3, 170 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo") );
	grilla->SetColLabelValue( 1, wxT("Nombre") );
	grilla->SetColLabelValue( 2, wxT("Categoria") );
	grilla->SetColLabelValue( 3, wxT("Fecha de estreno") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 0 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer3->Add( grilla, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button13 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button13, 0, wxALL, 5 );
	
	m_button14 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button14, 0, wxALL, 5 );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_button15, 0, wxALL, 5 );
	
	
	bSizer3->Add( bSizer6, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer3 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( VentanaPeliculas::CambiaTamanio ) );
	busqueda->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaPeliculas::EnterBuscar ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickBuscar ), NULL, this );
	grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaPeliculas::DobleClickGrilla ), NULL, this );
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaPeliculas::ClickGrilla ), NULL, this );
	m_button13->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickAgregar ), NULL, this );
	m_button14->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickEditar ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickEliminar ), NULL, this );
}

VentanaPeliculas::~VentanaPeliculas()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( VentanaPeliculas::CambiaTamanio ) );
	busqueda->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaPeliculas::EnterBuscar ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickBuscar ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaPeliculas::DobleClickGrilla ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaPeliculas::ClickGrilla ), NULL, this );
	m_button13->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickAgregar ), NULL, this );
	m_button14->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickEditar ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPeliculas::ClickEliminar ), NULL, this );
	
}

DialogAgregarPelicula::DialogAgregarPelicula( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL, 5 );
	
	tx_nompel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( tx_nompel, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer11, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Categoria:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL, 5 );
	
	wxString choiceCatChoices[] = { wxT("Accion"), wxT("Ciencia ficcion"), wxT("Aventura"), wxT("Comedia"), wxT("Terror"), wxT("Adultos"), wxT("Documentales"), wxT("Musical"), wxT("Suspenso") };
	int choiceCatNChoices = sizeof( choiceCatChoices ) / sizeof( wxString );
	choiceCat = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceCatNChoices, choiceCatChoices, 0 );
	choiceCat->SetSelection( 0 );
	bSizer12->Add( choiceCat, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer12, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Calidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer13->Add( m_staticText7, 0, wxALL, 5 );
	
	wxString choiceCalidadChoices[] = { wxT("Blu Ray"), wxT("Dvd") };
	int choiceCalidadNChoices = sizeof( choiceCalidadChoices ) / sizeof( wxString );
	choiceCalidad = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceCalidadNChoices, choiceCalidadChoices, 0 );
	choiceCalidad->SetSelection( 0 );
	bSizer13->Add( choiceCalidad, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer13, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Descripcion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer14->Add( m_staticText8, 0, wxALL, 5 );
	
	tx_descripcion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( tx_descripcion, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer14, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Fecha de estreno:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer15->Add( m_staticText9, 0, wxALL, 5 );
	
	tx_diaestreno = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( tx_diaestreno, 0, wxALL, 5 );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer15->Add( m_staticText10, 0, wxALL, 5 );
	
	tx_mesestreno = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( tx_mesestreno, 0, wxALL, 5 );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer15->Add( m_staticText11, 0, wxALL, 5 );
	
	tx_anioestreno = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( tx_anioestreno, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer15, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer16->Add( m_staticText12, 0, wxALL, 5 );
	
	tx_preciopel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( tx_preciopel, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer16, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer17->Add( m_staticText13, 0, wxALL, 5 );
	
	tx_cantidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( tx_cantidad, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer17, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer18, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	bSizer10->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPelicula::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPelicula::ClickBoton2 ), NULL, this );
}

DialogAgregarPelicula::~DialogAgregarPelicula()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPelicula::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPelicula::ClickBoton2 ), NULL, this );
	
}

DialogEditarPelicula::DialogEditarPelicula( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer53;
	bSizer53 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText48 = new wxStaticText( this, wxID_ANY, wxT("Codigo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	bSizer53->Add( m_staticText48, 0, wxALL, 5 );
	
	tx_codpel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_codpel->Enable( false );
	
	bSizer53->Add( tx_codpel, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer53, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL, 5 );
	
	tx_nompel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( tx_nompel, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer11, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Categoria:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL, 5 );
	
	wxString choiceCatChoices[] = { wxT("Accion"), wxT("Ciencia ficcion"), wxT("Aventura"), wxT("Comedia"), wxT("Terror"), wxT("Adultos"), wxT("Documentales"), wxT("Musical"), wxT("Suspenso") };
	int choiceCatNChoices = sizeof( choiceCatChoices ) / sizeof( wxString );
	choiceCat = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceCatNChoices, choiceCatChoices, 0 );
	choiceCat->SetSelection( 0 );
	bSizer12->Add( choiceCat, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer12, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Calidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer13->Add( m_staticText7, 0, wxALL, 5 );
	
	wxString choiceCalidadChoices[] = { wxT("Blu Ray"), wxT("Dvd") };
	int choiceCalidadNChoices = sizeof( choiceCalidadChoices ) / sizeof( wxString );
	choiceCalidad = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceCalidadNChoices, choiceCalidadChoices, 0 );
	choiceCalidad->SetSelection( 0 );
	bSizer13->Add( choiceCalidad, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer13, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Descripcion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer14->Add( m_staticText8, 0, wxALL, 5 );
	
	tx_descripcion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( tx_descripcion, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer14, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Fecha de estreno:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer15->Add( m_staticText9, 0, wxALL, 5 );
	
	tx_diaestreno = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( tx_diaestreno, 0, wxALL, 5 );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer15->Add( m_staticText10, 0, wxALL, 5 );
	
	tx_mesestreno = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( tx_mesestreno, 0, wxALL, 5 );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer15->Add( m_staticText11, 0, wxALL, 5 );
	
	tx_anioestreno = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( tx_anioestreno, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer15, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer16->Add( m_staticText12, 0, wxALL, 5 );
	
	tx_precio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( tx_precio, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer16, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer17->Add( m_staticText13, 0, wxALL, 5 );
	
	tx_cantidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( tx_cantidad, 1, wxALL, 5 );
	
	
	bSizer10->Add( bSizer17, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer18, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer10 );
	this->Layout();
	bSizer10->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPelicula::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPelicula::ClickBoton2 ), NULL, this );
}

DialogEditarPelicula::~DialogEditarPelicula()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPelicula::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPelicula::ClickBoton2 ), NULL, this );
	
}

VentanaClientes::VentanaClientes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Codigo de cliente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer15->Add( m_staticText11, 0, wxALL, 5 );
	
	busqueda = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( busqueda, 1, wxALL, 5 );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button11, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer15, 0, wxEXPAND, 5 );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 0, 5 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 75 );
	grilla->SetColSize( 1, 205 );
	grilla->SetColSize( 2, 175 );
	grilla->SetColSize( 3, 150 );
	grilla->SetColSize( 4, 75 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo") );
	grilla->SetColLabelValue( 1, wxT("Apellido y nombre") );
	grilla->SetColLabelValue( 2, wxT("Localidad") );
	grilla->SetColLabelValue( 3, wxT("Telefono") );
	grilla->SetColLabelValue( 4, wxT("Deuda") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 0 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer14->Add( grilla, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button15, 0, wxALL, 5 );
	
	m_button16 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button16, 0, wxALL, 5 );
	
	m_button17 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button17, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer17, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( VentanaClientes::CambiaTamanio ) );
	busqueda->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaClientes::EnterBuscar ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickBuscar ), NULL, this );
	grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaClientes::DobleClickGrilla ), NULL, this );
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaClientes::ClickGrilla ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickAgregar ), NULL, this );
	m_button16->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickEditar ), NULL, this );
	m_button17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickEliminar ), NULL, this );
}

VentanaClientes::~VentanaClientes()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( VentanaClientes::CambiaTamanio ) );
	busqueda->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaClientes::EnterBuscar ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickBuscar ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaClientes::DobleClickGrilla ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaClientes::ClickGrilla ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickAgregar ), NULL, this );
	m_button16->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickEditar ), NULL, this );
	m_button17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaClientes::ClickEliminar ), NULL, this );
	
}

DialogAgregarCliente::DialogAgregarCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_nomcliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_nomcliente, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	bSizer56->Add( m_staticText50, 0, wxALL, 5 );
	
	tx_apellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( tx_apellido, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer56, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer57->Add( m_staticText51, 0, wxALL, 5 );
	
	wxString choiceSexoChoices[] = { wxT("Masculino"), wxT("Femenino") };
	int choiceSexoNChoices = sizeof( choiceSexoChoices ) / sizeof( wxString );
	choiceSexo = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceSexoNChoices, choiceSexoChoices, 0 );
	choiceSexo->SetSelection( 0 );
	bSizer57->Add( choiceSexo, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer57, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("Localidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	bSizer58->Add( m_staticText52, 0, wxALL, 5 );
	
	tx_localidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer58->Add( tx_localidad, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer58, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer59->Add( m_staticText53, 0, wxALL, 5 );
	
	tx_direccion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( tx_direccion, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer59, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer60->Add( m_staticText54, 0, wxALL, 5 );
	
	tx_telefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer60->Add( tx_telefono, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer60, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText55 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimiento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	bSizer61->Add( m_staticText55, 0, wxALL, 5 );
	
	tx_dianac = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( tx_dianac, 0, wxALL, 5 );
	
	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	bSizer61->Add( m_staticText56, 0, wxALL, 5 );
	
	tx_mesnac = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( tx_mesnac, 0, wxALL, 5 );
	
	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	bSizer61->Add( m_staticText57, 0, wxALL, 5 );
	
	tx_anionac = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( tx_anionac, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer61, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer69;
	bSizer69 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer69->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer69->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer69, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCliente::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCliente::ClickBoton2 ), NULL, this );
}

DialogAgregarCliente::~DialogAgregarCliente()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCliente::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCliente::ClickBoton2 ), NULL, this );
	
}

DialogEditarCliente::DialogEditarCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer78;
	bSizer78 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText76 = new wxStaticText( this, wxID_ANY, wxT("Codigo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	bSizer78->Add( m_staticText76, 0, wxALL, 5 );
	
	tx_codcliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_codcliente->Enable( false );
	
	bSizer78->Add( tx_codcliente, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer78, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_nomcliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_nomcliente, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Apellido:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	bSizer56->Add( m_staticText50, 0, wxALL, 5 );
	
	tx_apellido = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( tx_apellido, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer56, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Sexo:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer57->Add( m_staticText51, 0, wxALL, 5 );
	
	wxString choiceSexoChoices[] = { wxT("Masculino"), wxT("Femenino") };
	int choiceSexoNChoices = sizeof( choiceSexoChoices ) / sizeof( wxString );
	choiceSexo = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceSexoNChoices, choiceSexoChoices, 0 );
	choiceSexo->SetSelection( 0 );
	bSizer57->Add( choiceSexo, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer57, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer58;
	bSizer58 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("Localidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	bSizer58->Add( m_staticText52, 0, wxALL, 5 );
	
	tx_localidad = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer58->Add( tx_localidad, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer58, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer59;
	bSizer59 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText53 = new wxStaticText( this, wxID_ANY, wxT("Direccion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	bSizer59->Add( m_staticText53, 0, wxALL, 5 );
	
	tx_direccion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer59->Add( tx_direccion, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer59, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer60;
	bSizer60 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText54 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText54->Wrap( -1 );
	bSizer60->Add( m_staticText54, 0, wxALL, 5 );
	
	tx_telefono = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer60->Add( tx_telefono, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer60, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText55 = new wxStaticText( this, wxID_ANY, wxT("Fecha de nacimiento:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	bSizer61->Add( m_staticText55, 0, wxALL, 5 );
	
	tx_dianac = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( tx_dianac, 0, wxALL, 5 );
	
	m_staticText56 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText56->Wrap( -1 );
	bSizer61->Add( m_staticText56, 0, wxALL, 5 );
	
	tx_mesnac = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( tx_mesnac, 0, wxALL, 5 );
	
	m_staticText57 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	bSizer61->Add( m_staticText57, 0, wxALL, 5 );
	
	tx_anionac = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( tx_anionac, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer61, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer70->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer70->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer70, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarCliente::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarCliente::ClickBoton2 ), NULL, this );
}

DialogEditarCliente::~DialogEditarCliente()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarCliente::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarCliente::ClickBoton2 ), NULL, this );
	
}

VentanaAlquileres::VentanaAlquileres( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Codigo de alquiler:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer15->Add( m_staticText11, 0, wxALL, 5 );
	
	busqueda = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( busqueda, 1, wxALL, 5 );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button11, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer15, 0, wxEXPAND, 5 );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 0, 5 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 135 );
	grilla->SetColSize( 1, 135 );
	grilla->SetColSize( 2, 135 );
	grilla->SetColSize( 3, 110 );
	grilla->SetColSize( 4, 165 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo de alquiler") );
	grilla->SetColLabelValue( 1, wxT("Codigo de cliente") );
	grilla->SetColLabelValue( 2, wxT("Codigo de pelicula") );
	grilla->SetColLabelValue( 3, wxT("Precio") );
	grilla->SetColLabelValue( 4, wxT("Fecha de devolucion") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 0 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer14->Add( grilla, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button15, 0, wxALL, 5 );
	
	m_button16 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button16, 0, wxALL, 5 );
	
	m_button17 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button17, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer17, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( VentanaAlquileres::CambiaTamanio ) );
	busqueda->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaAlquileres::EnterBuscar ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickBuscar ), NULL, this );
	grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaAlquileres::DobleClickGrilla ), NULL, this );
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaAlquileres::ClickGrilla ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickAgregar ), NULL, this );
	m_button16->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickEditar ), NULL, this );
	m_button17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickEliminar ), NULL, this );
}

VentanaAlquileres::~VentanaAlquileres()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( VentanaAlquileres::CambiaTamanio ) );
	busqueda->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaAlquileres::EnterBuscar ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickBuscar ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaAlquileres::DobleClickGrilla ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaAlquileres::ClickGrilla ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickAgregar ), NULL, this );
	m_button16->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickEditar ), NULL, this );
	m_button17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaAlquileres::ClickEliminar ), NULL, this );
	
}

DialogAgregarAlquiler::DialogAgregarAlquiler( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Codigo del cliente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_codcliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_codcliente, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Codigo de pelicula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	bSizer56->Add( m_staticText50, 0, wxALL, 5 );
	
	tx_codpel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( tx_codpel, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer56, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer57->Add( m_staticText51, 0, wxALL, 5 );
	
	tx_precioalquiler = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer57->Add( tx_precioalquiler, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer57, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer68, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAlquiler::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAlquiler::ClickBoton2 ), NULL, this );
}

DialogAgregarAlquiler::~DialogAgregarAlquiler()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAlquiler::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAlquiler::ClickBoton2 ), NULL, this );
	
}

DialogEditarAlquiler::DialogEditarAlquiler( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText69 = new wxStaticText( this, wxID_ANY, wxT("Codigo de alquiler:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	bSizer81->Add( m_staticText69, 0, wxALL, 5 );
	
	tx_codalquiler = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_codalquiler->Enable( false );
	
	bSizer81->Add( tx_codalquiler, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer81, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Codigo del cliente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_codcliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_codcliente, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Codigo de pelicula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	bSizer56->Add( m_staticText50, 0, wxALL, 5 );
	
	tx_codpel = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer56->Add( tx_codpel, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer56, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText62 = new wxStaticText( this, wxID_ANY, wxT("Fecha de alquiler:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText62->Wrap( -1 );
	bSizer94->Add( m_staticText62, 0, wxALL, 5 );
	
	tx_diadesde = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_diadesde->Enable( false );
	
	bSizer94->Add( tx_diadesde, 0, wxALL, 5 );
	
	m_staticText64 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText64->Wrap( -1 );
	bSizer94->Add( m_staticText64, 0, wxALL, 5 );
	
	tx_mesdesde = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_mesdesde->Enable( false );
	
	bSizer94->Add( tx_mesdesde, 0, wxALL, 5 );
	
	m_staticText65 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText65->Wrap( -1 );
	bSizer94->Add( m_staticText65, 0, wxALL, 5 );
	
	tx_aniodesde = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_aniodesde->Enable( false );
	
	bSizer94->Add( tx_aniodesde, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer94, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText63 = new wxStaticText( this, wxID_ANY, wxT("Fecha limite para pagar:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText63->Wrap( -1 );
	bSizer95->Add( m_staticText63, 0, wxALL, 5 );
	
	tx_diahasta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_diahasta->Enable( false );
	
	bSizer95->Add( tx_diahasta, 0, wxALL, 5 );
	
	m_staticText66 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText66->Wrap( -1 );
	bSizer95->Add( m_staticText66, 0, wxALL, 5 );
	
	tx_meshasta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_meshasta->Enable( false );
	
	bSizer95->Add( tx_meshasta, 0, wxALL, 5 );
	
	m_staticText67 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText67->Wrap( -1 );
	bSizer95->Add( m_staticText67, 0, wxALL, 5 );
	
	tx_aniohasta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_aniohasta->Enable( false );
	
	bSizer95->Add( tx_aniohasta, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer95, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	bSizer57->Add( m_staticText51, 0, wxALL, 5 );
	
	tx_precioalquiler = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer57->Add( tx_precioalquiler, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer57, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer68, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarAlquiler::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarAlquiler::ClickBoton2 ), NULL, this );
}

DialogEditarAlquiler::~DialogEditarAlquiler()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarAlquiler::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarAlquiler::ClickBoton2 ), NULL, this );
	
}

VentanaDevoluciones::VentanaDevoluciones( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Codigo de devolucion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer15->Add( m_staticText11, 0, wxALL, 5 );
	
	busqueda = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( busqueda, 1, wxALL, 5 );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button11, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer15, 0, wxEXPAND, 5 );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 0, 4 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 170 );
	grilla->SetColSize( 1, 170 );
	grilla->SetColSize( 2, 170 );
	grilla->SetColSize( 3, 170 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo de devolucion") );
	grilla->SetColLabelValue( 1, wxT("Codigo de alquiler") );
	grilla->SetColLabelValue( 2, wxT("Estado de devolucion") );
	grilla->SetColLabelValue( 3, wxT("Fecha de devolucion") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 0 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer14->Add( grilla, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button15, 0, wxALL, 5 );
	
	m_button16 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button16, 0, wxALL, 5 );
	
	m_button17 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button17, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer17, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( VentanaDevoluciones::CambiaTamanio ) );
	busqueda->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaDevoluciones::EnterBuscar ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickBuscar ), NULL, this );
	grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaDevoluciones::DobleClickGrilla ), NULL, this );
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaDevoluciones::ClickGrilla ), NULL, this );
	grilla->Connect( wxEVT_SIZE, wxSizeEventHandler( VentanaDevoluciones::CambiaTamanio ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickAgregar ), NULL, this );
	m_button16->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickEditar ), NULL, this );
	m_button17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickEliminar ), NULL, this );
}

VentanaDevoluciones::~VentanaDevoluciones()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( VentanaDevoluciones::CambiaTamanio ) );
	busqueda->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaDevoluciones::EnterBuscar ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickBuscar ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaDevoluciones::DobleClickGrilla ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaDevoluciones::ClickGrilla ), NULL, this );
	grilla->Disconnect( wxEVT_SIZE, wxSizeEventHandler( VentanaDevoluciones::CambiaTamanio ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickAgregar ), NULL, this );
	m_button16->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickEditar ), NULL, this );
	m_button17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaDevoluciones::ClickEliminar ), NULL, this );
	
}

DialogAgregarDevolucion::DialogAgregarDevolucion( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Codigo de alquiler:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_codalquiler = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_codalquiler, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Estado de la pelicula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	bSizer56->Add( m_staticText50, 0, wxALL, 5 );
	
	wxString choiceEstadoChoices[] = { wxT("Bien"), wxT("Mal") };
	int choiceEstadoNChoices = sizeof( choiceEstadoChoices ) / sizeof( wxString );
	choiceEstado = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceEstadoNChoices, choiceEstadoChoices, 0 );
	choiceEstado->SetSelection( 0 );
	bSizer56->Add( choiceEstado, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer56, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer68, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarDevolucion::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarDevolucion::ClickBoton2 ), NULL, this );
}

DialogAgregarDevolucion::~DialogAgregarDevolucion()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarDevolucion::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarDevolucion::ClickBoton2 ), NULL, this );
	
}

DialogEditarDevolucion::DialogEditarDevolucion( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Codigo de devolucion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer84->Add( m_staticText61, 0, wxALL, 5 );
	
	tx_coddevolucion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_coddevolucion->Enable( false );
	
	bSizer84->Add( tx_coddevolucion, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer84, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Codigo de alquiler:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_codalquiler = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_codalquiler, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("Estado de la pelicula:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	bSizer56->Add( m_staticText50, 0, wxALL, 5 );
	
	wxString choiceEstadoChoices[] = { wxT("Bien"), wxT("Mal") };
	int choiceEstadoNChoices = sizeof( choiceEstadoChoices ) / sizeof( wxString );
	choiceEstado = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, choiceEstadoNChoices, choiceEstadoChoices, 0 );
	choiceEstado->SetSelection( 0 );
	bSizer56->Add( choiceEstado, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer56, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText68 = new wxStaticText( this, wxID_ANY, wxT("Fecha de devolucion:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText68->Wrap( -1 );
	bSizer96->Add( m_staticText68, 0, wxALL, 5 );
	
	tx_diadevolucion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_diadevolucion->Enable( false );
	
	bSizer96->Add( tx_diadevolucion, 0, wxALL, 5 );
	
	m_staticText69 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	bSizer96->Add( m_staticText69, 0, wxALL, 5 );
	
	tx_mesdevolucion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_mesdevolucion->Enable( false );
	
	bSizer96->Add( tx_mesdevolucion, 0, wxALL, 5 );
	
	m_staticText70 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	bSizer96->Add( m_staticText70, 0, wxALL, 5 );
	
	tx_aniodevolucion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_aniodevolucion->Enable( false );
	
	bSizer96->Add( tx_aniodevolucion, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer96, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer68, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarDevolucion::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarDevolucion::ClickBoton2 ), NULL, this );
}

DialogEditarDevolucion::~DialogEditarDevolucion()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarDevolucion::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarDevolucion::ClickBoton2 ), NULL, this );
	
}

VentanaPagos::VentanaPagos( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Fecha de pago:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer15->Add( m_staticText11, 0, wxALL, 5 );
	
	busqueda = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( busqueda, 1, wxALL, 5 );
	
	m_button11 = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button11, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer15, 0, wxEXPAND, 5 );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 0, 3 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 170 );
	grilla->SetColSize( 1, 170 );
	grilla->SetColSize( 2, 170 );
	grilla->SetColSize( 3, 170 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo del cliente") );
	grilla->SetColLabelValue( 1, wxT("Monto pagado") );
	grilla->SetColLabelValue( 2, wxT("Fecha de pago") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 0 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer14->Add( grilla, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button15 = new wxButton( this, wxID_ANY, wxT("Agregar pago"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button15, 0, wxALL, 5 );
	
	m_button16 = new wxButton( this, wxID_ANY, wxT("Ver/Editar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button16, 0, wxALL, 5 );
	
	m_button17 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_button17, 0, wxALL, 5 );
	
	
	bSizer14->Add( bSizer17, 0, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer14 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( VentanaPagos::CambiaTamanio ) );
	busqueda->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaPagos::EnterBuscar ), NULL, this );
	m_button11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickBuscar ), NULL, this );
	grilla->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaPagos::DobleClickGrilla ), NULL, this );
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaPagos::ClickGrilla ), NULL, this );
	m_button15->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickAgregar ), NULL, this );
	m_button16->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickEditar ), NULL, this );
	m_button17->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickEliminar ), NULL, this );
}

VentanaPagos::~VentanaPagos()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( VentanaPagos::CambiaTamanio ) );
	busqueda->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( VentanaPagos::EnterBuscar ), NULL, this );
	m_button11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickBuscar ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaPagos::DobleClickGrilla ), NULL, this );
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaPagos::ClickGrilla ), NULL, this );
	m_button15->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickAgregar ), NULL, this );
	m_button16->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickEditar ), NULL, this );
	m_button17->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPagos::ClickEliminar ), NULL, this );
	
}

DialogAgregarPago::DialogAgregarPago( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Codigo de cliente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer84->Add( m_staticText61, 0, wxALL, 5 );
	
	tx_codcliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer84->Add( tx_codcliente, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer84, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Monto a pagar:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_monto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_monto, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer68, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPago::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPago::ClickBoton2 ), NULL, this );
}

DialogAgregarPago::~DialogAgregarPago()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPago::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarPago::ClickBoton2 ), NULL, this );
	
}

DialogEditarPago::DialogEditarPago( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer54;
	bSizer54 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer84;
	bSizer84 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText61 = new wxStaticText( this, wxID_ANY, wxT("Codigo de cliente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText61->Wrap( -1 );
	bSizer84->Add( m_staticText61, 0, wxALL, 5 );
	
	tx_codcliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer84->Add( tx_codcliente, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer84, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("Monto a pagar:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	bSizer55->Add( m_staticText49, 0, wxALL, 5 );
	
	tx_monto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer55->Add( tx_monto, 1, wxALL, 5 );
	
	
	bSizer54->Add( bSizer55, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText66 = new wxStaticText( this, wxID_ANY, wxT("Fecha de pago:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText66->Wrap( -1 );
	bSizer96->Add( m_staticText66, 0, wxALL, 5 );
	
	tx_diapago = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_diapago->Enable( false );
	
	bSizer96->Add( tx_diapago, 1, wxALL, 5 );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	bSizer96->Add( m_staticText71, 0, wxALL, 5 );
	
	tx_mespago = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_mespago->Enable( false );
	
	bSizer96->Add( tx_mespago, 0, wxALL, 5 );
	
	m_staticText72 = new wxStaticText( this, wxID_ANY, wxT("/"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	bSizer96->Add( m_staticText72, 0, wxALL, 5 );
	
	tx_aniopago = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_aniopago->Enable( false );
	
	bSizer96->Add( tx_aniopago, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer96, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer68;
	bSizer68 = new wxBoxSizer( wxHORIZONTAL );
	
	boton1 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton1, 0, wxALL, 5 );
	
	boton2 = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer68->Add( boton2, 0, wxALL, 5 );
	
	
	bSizer54->Add( bSizer68, 1, wxALIGN_RIGHT, 5 );
	
	
	this->SetSizer( bSizer54 );
	this->Layout();
	bSizer54->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	boton1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPago::ClickBoton1 ), NULL, this );
	boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPago::ClickBoton2 ), NULL, this );
}

DialogEditarPago::~DialogEditarPago()
{
	// Disconnect Events
	boton1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPago::ClickBoton1 ), NULL, this );
	boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogEditarPago::ClickBoton2 ), NULL, this );
	
}

VentanaEstadisticas::VentanaEstadisticas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer97;
	bSizer97 = new wxBoxSizer( wxVERTICAL );
	
	m_button51 = new wxButton( this, wxID_ANY, wxT("Ranking general de peliculas"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer97->Add( m_button51, 1, wxALL|wxEXPAND, 5 );
	
	m_button52 = new wxButton( this, wxID_ANY, wxT("Ranking general de clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer97->Add( m_button52, 1, wxALL|wxEXPAND, 5 );
	
	m_button53 = new wxButton( this, wxID_ANY, wxT("Ingresos del mes actual"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer97->Add( m_button53, 1, wxALL|wxEXPAND, 5 );
	
	m_button56 = new wxButton( this, wxID_ANY, wxT("Peliculas rotas del mes actual"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer97->Add( m_button56, 1, wxALL|wxEXPAND, 5 );
	
	m_button54 = new wxButton( this, wxID_ANY, wxT("Ranking de clientes por rango de fecha"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer97->Add( m_button54, 1, wxALL|wxEXPAND, 5 );
	
	m_button55 = new wxButton( this, wxID_ANY, wxT("Ranking de categorias por rango de fecha"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer97->Add( m_button55, 1, wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer97 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button51->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankPel ), NULL, this );
	m_button52->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankClientes ), NULL, this );
	m_button53->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickIngresoMes ), NULL, this );
	m_button56->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickPelRotas ), NULL, this );
	m_button54->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankClientesRango ), NULL, this );
	m_button55->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankCatRango ), NULL, this );
}

VentanaEstadisticas::~VentanaEstadisticas()
{
	// Disconnect Events
	m_button51->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankPel ), NULL, this );
	m_button52->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankClientes ), NULL, this );
	m_button53->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickIngresoMes ), NULL, this );
	m_button56->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickPelRotas ), NULL, this );
	m_button54->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankClientesRango ), NULL, this );
	m_button55->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaEstadisticas::ClickRankCatRango ), NULL, this );
	
}

DialogRankPeliculas::DialogRankPeliculas( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer98;
	bSizer98 = new wxBoxSizer( wxVERTICAL );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 20, 4 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 80 );
	grilla->SetColSize( 1, 250 );
	grilla->SetColSize( 2, 180 );
	grilla->SetColSize( 3, 170 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo") );
	grilla->SetColLabelValue( 1, wxT("Nombre") );
	grilla->SetColLabelValue( 2, wxT("Categoria") );
	grilla->SetColLabelValue( 3, wxT("Fecha de estreno") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 80 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer98->Add( grilla, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer98 );
	this->Layout();
	bSizer98->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( DialogRankPeliculas::ClickGrilla ), NULL, this );
}

DialogRankPeliculas::~DialogRankPeliculas()
{
	// Disconnect Events
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( DialogRankPeliculas::ClickGrilla ), NULL, this );
	
}

DialogRankClientes::DialogRankClientes( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer99;
	bSizer99 = new wxBoxSizer( wxVERTICAL );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 20, 5 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 75 );
	grilla->SetColSize( 1, 205 );
	grilla->SetColSize( 2, 175 );
	grilla->SetColSize( 3, 150 );
	grilla->SetColSize( 4, 75 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo") );
	grilla->SetColLabelValue( 1, wxT("Apellido y nombre") );
	grilla->SetColLabelValue( 2, wxT("Localidad") );
	grilla->SetColLabelValue( 3, wxT("Telefono") );
	grilla->SetColLabelValue( 4, wxT("Deuda") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 80 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer99->Add( grilla, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer99 );
	this->Layout();
	bSizer99->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	grilla->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( DialogRankClientes::ClickGrilla ), NULL, this );
}

DialogRankClientes::~DialogRankClientes()
{
	// Disconnect Events
	grilla->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( DialogRankClientes::ClickGrilla ), NULL, this );
	
}

DialogIngresoMesActual::DialogIngresoMesActual( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText67 = new wxStaticText( this, wxID_ANY, wxT("Ingresos del mes actual:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText67->Wrap( -1 );
	bSizer100->Add( m_staticText67, 0, wxALL, 5 );
	
	tx_ingresomes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	tx_ingresomes->Enable( false );
	
	bSizer100->Add( tx_ingresomes, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer100 );
	this->Layout();
	bSizer100->Fit( this );
	
	this->Centre( wxBOTH );
}

DialogIngresoMesActual::~DialogIngresoMesActual()
{
}

DialogPelRotasMesActual::DialogPelRotasMesActual( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 20, 4 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 140 );
	grilla->SetColSize( 1, 175 );
	grilla->SetColSize( 2, 175 );
	grilla->SetColSize( 3, 150 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Codigo de pelicula") );
	grilla->SetColLabelValue( 1, wxT("Nombre") );
	grilla->SetColLabelValue( 2, wxT("Categoria") );
	grilla->SetColLabelValue( 3, wxT("Fecha de estreno") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 80 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer101->Add( grilla, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer101 );
	this->Layout();
	bSizer101->Fit( this );
	
	this->Centre( wxBOTH );
}

DialogPelRotasMesActual::~DialogPelRotasMesActual()
{
}

DialogRankClientesRango::DialogRankClientesRango( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer99;
	bSizer99 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText75 = new wxStaticText( this, wxID_ANY, wxT("Fecha \"desde\":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	bSizer99->Add( m_staticText75, 0, wxALL, 5 );
	
	tx_rankfechadesde = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer99->Add( tx_rankfechadesde, 1, wxALL, 5 );
	
	
	bSizer102->Add( bSizer99, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText76 = new wxStaticText( this, wxID_ANY, wxT("Fecha \"hasta\":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	bSizer100->Add( m_staticText76, 0, wxALL, 5 );
	
	tx_rankfechahasta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer100->Add( tx_rankfechahasta, 1, wxALL, 5 );
	
	
	bSizer102->Add( bSizer100, 1, wxEXPAND, 5 );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 20, 2 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 205 );
	grilla->SetColSize( 1, 205 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Cantidad de alquileres") );
	grilla->SetColLabelValue( 1, wxT("Codigo de cliente") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 80 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer102->Add( grilla, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer102 );
	this->Layout();
	bSizer102->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tx_rankfechadesde->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankClientesRango::ClickEnter1 ), NULL, this );
	tx_rankfechahasta->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankClientesRango::ClickEnter2 ), NULL, this );
}

DialogRankClientesRango::~DialogRankClientesRango()
{
	// Disconnect Events
	tx_rankfechadesde->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankClientesRango::ClickEnter1 ), NULL, this );
	tx_rankfechahasta->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankClientesRango::ClickEnter2 ), NULL, this );
	
}

DialogRankCatRango::DialogRankCatRango( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText77 = new wxStaticText( this, wxID_ANY, wxT("Fecha \"desde\":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText77->Wrap( -1 );
	bSizer101->Add( m_staticText77, 0, wxALL, 5 );
	
	tx_rankfechadesde = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( tx_rankfechadesde, 1, wxALL, 5 );
	
	
	bSizer103->Add( bSizer101, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText78 = new wxStaticText( this, wxID_ANY, wxT("Fecha \"hasta\":"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText78->Wrap( -1 );
	bSizer102->Add( m_staticText78, 0, wxALL, 5 );
	
	tx_rankfechahasta = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( tx_rankfechahasta, 1, wxALL, 5 );
	
	
	bSizer103->Add( bSizer102, 1, wxEXPAND, 5 );
	
	grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	grilla->CreateGrid( 20, 2 );
	grilla->EnableEditing( false );
	grilla->EnableGridLines( true );
	grilla->EnableDragGridSize( false );
	grilla->SetMargins( 0, 0 );
	
	// Columns
	grilla->SetColSize( 0, 205 );
	grilla->SetColSize( 1, 205 );
	grilla->EnableDragColMove( false );
	grilla->EnableDragColSize( true );
	grilla->SetColLabelSize( 30 );
	grilla->SetColLabelValue( 0, wxT("Cantidad de alquileres") );
	grilla->SetColLabelValue( 1, wxT("Categoria") );
	grilla->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	grilla->EnableDragRowSize( true );
	grilla->SetRowLabelSize( 80 );
	grilla->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer103->Add( grilla, 0, wxALL, 5 );
	
	
	this->SetSizer( bSizer103 );
	this->Layout();
	bSizer103->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	tx_rankfechadesde->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankCatRango::ClickEnter1 ), NULL, this );
	tx_rankfechahasta->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankCatRango::ClickEnter2 ), NULL, this );
}

DialogRankCatRango::~DialogRankCatRango()
{
	// Disconnect Events
	tx_rankfechadesde->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankCatRango::ClickEnter1 ), NULL, this );
	tx_rankfechahasta->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( DialogRankCatRango::ClickEnter2 ), NULL, this );
	
}

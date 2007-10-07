/////////////////////////////////////////////////////////////////////////////
// Name:        dialog_display_options.h
// Purpose:     
// Author:      jean-pierre Charras
// Modified by: 
// Created:     17/02/2006 17:47:55
// RCS-ID:      
// Copyright:   License GNU
// Licence:     
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (unregistered), 17/02/2006 17:47:55

#ifndef _DIALOG_DISPLAY_OPTIONS_H_
#define _DIALOG_DISPLAY_OPTIONS_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "dialog_display_options.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/valgen.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_DIALOG 10000
#define SYMBOL_KIDISPLAYOPTIONSFRAME_STYLE wxCAPTION|wxSYSTEM_MENU|wxCLOSE_BOX|MAYBE_RESIZE_BORDER
#define SYMBOL_KIDISPLAYOPTIONSFRAME_TITLE _("Options")
#define SYMBOL_KIDISPLAYOPTIONSFRAME_IDNAME ID_DIALOG
#define SYMBOL_KIDISPLAYOPTIONSFRAME_SIZE wxSize(400, 300)
#define SYMBOL_KIDISPLAYOPTIONSFRAME_POSITION wxDefaultPosition
#define PADNUM_OPT 10002
#define ID_SAVE_CONFIG 10005
#define PADFILL_OPT 10001
#define EDGE_SELECT 10003
#define TEXT_SELECT 10004
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * KiDisplayOptionsFrame class declaration
 */

class KiDisplayOptionsFrame: public wxDialog
{    
    DECLARE_DYNAMIC_CLASS( KiDisplayOptionsFrame )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    KiDisplayOptionsFrame( );
    KiDisplayOptionsFrame( WinEDA_BasePcbFrame* parent, wxWindowID id = SYMBOL_KIDISPLAYOPTIONSFRAME_IDNAME, const wxString& caption = SYMBOL_KIDISPLAYOPTIONSFRAME_TITLE, const wxPoint& pos = SYMBOL_KIDISPLAYOPTIONSFRAME_POSITION, const wxSize& size = SYMBOL_KIDISPLAYOPTIONSFRAME_SIZE, long style = SYMBOL_KIDISPLAYOPTIONSFRAME_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_KIDISPLAYOPTIONSFRAME_IDNAME, const wxString& caption = SYMBOL_KIDISPLAYOPTIONSFRAME_TITLE, const wxPoint& pos = SYMBOL_KIDISPLAYOPTIONSFRAME_POSITION, const wxSize& size = SYMBOL_KIDISPLAYOPTIONSFRAME_SIZE, long style = SYMBOL_KIDISPLAYOPTIONSFRAME_STYLE );

    /// Creates the controls and sizers
    void CreateControls();

////@begin KiDisplayOptionsFrame event handler declarations

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for ID_SAVE_CONFIG
    void OnSaveConfigClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_OK
    void OnOkClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_CANCEL
    void OnCancelClick( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_APPLY
    void OnApplyClick( wxCommandEvent& event );

////@end KiDisplayOptionsFrame event handler declarations

////@begin KiDisplayOptionsFrame member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );

    /// Updates settings related to edges, text strings, and pads
    void UpdateObjectSettings();
////@end KiDisplayOptionsFrame member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();
	
////@begin KiDisplayOptionsFrame member variables
    wxRadioBox* m_EdgesDisplayOption;
    wxRadioBox* m_TextDisplayOption;
    wxCheckBox* m_IsShowPadNum;
    wxCheckBox* m_IsShowPadFill;
////@end KiDisplayOptionsFrame member variables

	WinEDA_BasePcbFrame * m_Parent;

};

#endif
    // _DIALOG_DISPLAY_OPTIONS_H_

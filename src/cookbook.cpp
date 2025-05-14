#include "cookbook.h"

CookBook::CookBook() : wxFrame(nullptr, wxID_ANY, "CookBook") {
    wxMenu* menuFile = new wxMenu;

    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);

    wxMenu* menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);

    wxMenuBar* menuBar = new wxMenuBar;
    menuBar->Append(menuFile, "&File");
    menuBar->Append(menuHelp, "&Help");

    SetMenuBar(menuBar);
    CreateStatusBar();
    SetStatusText("Welcome to wxWidgets!");
    // connect
    Bind(wxEVT_MENU, &CookBook::OnHello, this, ID_Hello);
    Bind(wxEVT_MENU, &CookBook::OnAbout, this, wxID_ABOUT);
    Bind(wxEVT_MENU, &CookBook::OnExit, this, wxID_EXIT);
}

void CookBook::OnExit(wxCommandEvent& event) {
    Close(true);
}

void CookBook::OnAbout(wxCommandEvent& event) {
    wxMessageBox("This is a wxWidgets Hello World example", "About Hello World",
                 wxOK | wxICON_INFORMATION);
}

void CookBook::OnHello(wxCommandEvent& event) {
    wxLogMessage("Hello world from wxWidgets!");
}
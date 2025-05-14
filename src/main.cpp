#include <wx/wx.h>

#include "cookbook.h"

class CookBookApp : public wxApp {
public:
    bool OnInit() override;
};

bool CookBookApp::OnInit() {
    CookBook* cook_book = new CookBook();
    cook_book->Show(true);
    return true;
}

wxIMPLEMENT_APP(CookBookApp);
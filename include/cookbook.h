#ifndef COOKBOOK_H
#define COOKBOOK_H
#include <wx/wx.h>

class CookBook : public wxFrame

{
public:
    CookBook();
    enum { ID_Hello = 1 };

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};

#endif  // SETTINGS_GROUP_H
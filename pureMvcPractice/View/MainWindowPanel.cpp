#include <wx/stattext.h>
#include "Mainwindow.h"
 
LeftPanel::LeftPanel(wxPanel * parent)
       : wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN)
{
  count = 0;
  m_parent = parent;
  m_plus = new wxButton(this, ID_PLUS, wxT("+"), 
      wxPoint(10, 10));
  m_minus = new wxButton(this, ID_MINUS, wxT("-"), 
      wxPoint(10, 60));

  this->Bind(
        wxEVT_COMMAND_BUTTON_CLICKED,
        wxCommandEventHandler(LeftPanel::OnPlus),
        this,
        ID_PLUS);

  this->Bind(
        wxEVT_COMMAND_BUTTON_CLICKED,
        wxCommandEventHandler(LeftPanel::OnMinus),
        this,
        ID_MINUS);

  /*Connect(ID_PLUS, wxEVT_COMMAND_BUTTON_CLICKED, 
      wxCommandEventHandler(LeftPanel::OnPlus));
  Connect(ID_MINUS, wxEVT_COMMAND_BUTTON_CLICKED, 
      wxCommandEventHandler(LeftPanel::OnMinus));*/
}
 
void LeftPanel::OnPlus(wxCommandEvent & WXUNUSED(event))
{
	MainWindow *parent = (MainWindow *) m_parent->GetParent();
	parent->onPlusSender(1);
}
 
void LeftPanel::OnMinus(wxCommandEvent & WXUNUSED(event))
{
	
	MainWindow *parent = (MainWindow *) m_parent->GetParent();
	parent->onPlusSender(-1);
  /*count--;
 
  MainWindow *parent = (MainWindow *) m_parent->GetParent();
  parent->m_rp->m_text->SetLabel(wxString::Format(wxT("%d"), count));*/
}
 
 
RightPanel::RightPanel(wxPanel * parent)
       : wxPanel(parent, wxID_ANY, wxDefaultPosition, 
         wxSize(270, 150), wxBORDER_SUNKEN)
{
    m_text = new wxStaticText(this, -1, wxT("0"), wxPoint(40, 60));
}
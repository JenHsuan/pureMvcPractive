#include "AppEntry.h"
#include "MainWindow.h"
 
IMPLEMENT_APP(AppEntry)

AppEntry::~AppEntry(){};

bool AppEntry::OnInit()
{
 
    //Communicate *communicate = new Communicate(wxT("Widgets communicate"));
    //communicate->Show(true);
	MainWindow *mainWindow = new MainWindow(wxT("MainWindow"));
	mainWindow->Show(true);

    return true;
}
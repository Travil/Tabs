/*
 * =====================================================================================
 *
 *       Filename:  MainFrame.h
 *
 *    Description:  the main frame of the window manager
 *
 *        Version:  1.0
 *        Created:  07/30/2012 03:06:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ts 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <F_/Fl_Tabs.H>

class Ts_Tabs : public Fl_Tabs {
  public:
    Ts_Tabs();
    ~Ts_Tabs(){};
    add();
  private:
    Fl_Button * ts_Back;
    Fl_Button * ts_Forward;
    Fl_Button * ts_Reload;
    Fl_Input * ts_Url;
    Fl_Button * ts_Goto;
    Fl_Tabs * ts_Tabs;
    Fl_Help_View * ts_ShowArea;
    int count = 1;
    int screen_width, screen_height;
    int button_width, button_height;
};

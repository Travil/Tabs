/*
 * =====================================================================================
 *
 *       Filename:  MainFrame.cpp
 *
 *    Description:  implements of MainFrame.h
 *
 *        Version:  1.0
 *        Created:  07/30/2012 03:20:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  ts 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#ifndef MAINFRAME_H
Ts_Tabs::Ts_Tabs(){
  screen_width = Fl::w();
  screen_height = Fl::h();
  button_width = 32, button_height = 25;
  ts_Back = new Fl_Button(0, 0, button_width, button_height, "@(-");
  ts_Forward = new Fl_Button(button_width, 0, button_width, button_height, "@-)");
  ts_Reload = new Fl_Button(button_width * 2, 0, button_width, button_height, "@O");
  ts_Url = new Fl_Input(button_width * 3, 0, screen_width - button_width * 4, button_height, "Enter address or search");
  ts_Goto = new Fl_Button(screen_width - button_width, 0, button_width, button_height,"Goto");
  ts_Tabs = new Fl_Tabs(0, button_height, screen_width, screen_height - button_height - 25); 
  ts_Tabs->add(new Fl_Help_View(0, 0, screen_width, screen_height - button_height * 2 - 25));
}
Ts_Tabs::add(){
  ts_Tabs->add(new Fl_Help_View(0, 0, screen_width, screen_height - button_height * 2 - 25));
}
#endif

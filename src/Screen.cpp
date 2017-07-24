#include <ncurses.h>
#include <string>
#include <stdlib.h>

#include "Screen.h"

using namespace std;

Screen::Screen() {

}

Screen::~Screen() {

}

void Screen::printBorder(){
    int x=0;
    int y=0;
    string d = "#";
    for(y=0;y<80;y++){/*Top*/
        mvaddstr(0,y,d.c_str());
    }
    for(y=0;y<80;y++){/*Bottom*/
        mvaddstr(25,y,d.c_str());
    }
    for(x=0;x<26;x++){/*Left Side*/
        mvaddstr(x,0,d.c_str());
    }
    for(x=0;x<26;x++){/*Right Side*/
        mvaddstr(x,80,d.c_str());
    }
}

void Screen::render() {
  Screen::printBorder();
  clear();
  refresh();
}

int setup() {
  initscr();
  raw();
  noecho();
  curs_set(0);
  keypad(stdscr, TRUE);
  start_color();
  return 0;
}

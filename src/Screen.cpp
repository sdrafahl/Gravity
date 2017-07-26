#include <ncurses.h>
#include <curses.h>
#include <string>
#include <stdlib.h>

#include "Screen.h"
#include "SmartPtr.h"

using namespace std;

void Screen::printBorder() {
    int x=0;
    int y=0;
    string d = "#";
    string space = " ";
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
    for(y=0;y<80;y++){/*Bottom*/
        mvaddstr(26,y,space.c_str());
    }
}

Screen::Screen() {}

void Screen::attachItem(Item* item) {
    this->item = item;
}

void Screen::render() {
    clear();
    Screen::printBorder();
    mvaddstr(24 - this->item->y, this->item->x + 1, "I");
    string yPos = "y: " + std::to_string(this->item->y);
    mvaddstr(26,0,yPos.c_str());
    string vel = "Velocity: " + std::to_string(this->item->velocity);
    mvaddstr(27,0,vel.c_str());
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

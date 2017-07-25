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

Screen::Screen() {}

void Screen::attachItem(Item* item) {
    this->item = item;
}

void Screen::render() {
    clear();
    Screen::printBorder();
    mvaddstr(24 - this->item->y, this->item->x + 1, "I");
    printf("\n");
    refresh();
}

int setup() {
    initscr();
    raw();
    noecho();
    curs_set(0);
    wresize(stdscr, 100, 100);
    keypad(stdscr, TRUE);
    start_color();
    return 0;
}

#include <ncurses.h>

#include "display.h"

using namespace std;

Screen::Screen() {

}

Screen::~Screen() {

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

void print

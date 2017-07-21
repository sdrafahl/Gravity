#include <ncurses.h>

#include "display.h"

int setup() {
  initscr();
  raw();
  noecho();
  curs_set(0);
  keypad(stdscr, TRUE);
  start_color();
  return 0;
}

#ifndef SCREEN
# define SCREEN

#include <ncurses.h>

#include "SmartPtr.h"

int setup();

class Screen {
  public:
    Screen();
    ~Screen();
    void render();
  private:
    void printBorder();
};

#endif

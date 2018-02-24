#ifndef SCREEN
# define SCREEN

#include <ncurses.h>

#include "Item.h"

int setup();

class Screen {
    public:
        Screen();
        void render();
        void attachItem(Item* item);
    private:
        void printBorder();
        Item* item;
};

#endif

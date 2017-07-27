#include <ncurses.h>
#include <curses.h>
#include <string>

#include "Item.h"

using namespace std;

Item::Item(float x, float y) {
    this->gravity=.099;
    this->velocity=.1;
    this->x = x;
    this->y = y;
}

void Item::jump(float velocity) {
    this->velocity += velocity;
}

void Item::handle() {
    this->y += this->velocity;
    this->velocity -= this->gravity;
    if(this->y + this->velocity <= 0) {
        this->velocity = 0.0;
        this->y = 0;
    }
}

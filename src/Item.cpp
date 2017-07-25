#include "Item.h"

using namespace std;

Item::Item(unsigned int x, unsigned int y) {
    this->gravity=1.0;
    this->velocity=0.0;
    this->x = x;
    this->y = y;
}

void Item::handle() {
    if(!this->y > 0) {
        this->y += this->velocity;
        this->velocity -= this->gravity;
        if(this->y <= 0) {
            this->velocity = 0.0;
        }
    }
}

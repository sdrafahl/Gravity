#include <ncurses.h>

#include "SmartPtr.h"
#include "Screen.h"
#include "Item.h"

int main() {
  setup();
  Item item(40, 0);
  Screen sc;
  sc.attachItem(&item);
  sc.render();
  return 0;
}

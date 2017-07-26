#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>

#include "SmartPtr.h"
#include "Screen.h"
#include "Item.h"

int main() {
  int process = 1;
  Item* item = new Item(40, 0);
  Screen* sc = new Screen();
  setup();
  sc->attachItem(item);
  while(process) {
      sc->render();
      int input = getch();
      if(input == 'q') {
          process = 0;
          system("reset");
      }else{
          if(input == 'j') {
              item->jump(20);
          }
      }
      item->handle();
      usleep(20);
  }
  return 0;
}

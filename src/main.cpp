#include <ncurses.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>
#include <thread>

#include "SmartPtr.h"
#include "Screen.h"
#include "Item.h"

int main() {
  Item* item = new Item(40.0, 0.0);
  Screen* sc = new Screen();
  setup();
  sc->attachItem(item);
  char inp;
  int process = 1;
  while(process) {
      inp = getch();
      sc->render();
      if(inp == 'q') {
          process = 0;
          system("reset");
      }else{
          if(inp == 'j') {
              item->jump(1);
          }
      }
      item->handle();
      usleep(5000);
  }
  return 0;
}

CC := g++
DEBUG := -g
CFLAGS := -std=c++14
LFLAGS := -Wall
SOURCEDIR := src
SOURCES := $(shell find $(SOURCEDIR) -name '*.cpp')
BINARY := Gravity.out
LINKS := -lncurses -lpthread

.PHONY: clean

p1:
	$(CC) $(CFLAGS) $(SOURCES) -o $(BINARY) $(LINKS)

p2:
	$(CC) $(LFLAGS) $(CFLAGS) $(SOURCES) $(DEBUG) -o $(BINARY)

all: p1

debug: p2

run: all
	./$(BINARY)

clean:
	\rm ./$(BINARY)

distclean: clean

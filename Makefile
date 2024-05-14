CXX=g++
CFLAGS=-Wall -std=c++11
TARGET_NAME=ColourPrint
LIB_DIR=$(CURDIR)

.PHONY: build clean example

build: colourful_print.cpp colourful_print.h
	$(CXX) $(CFLAGS) -fPIC -shared colourful_print.cpp -o lib$(TARGET_NAME).so
	$(CXX) $(CFLAGS) -c colourful_print.cpp
	ar rcs lib$(TARGET_NAME).a colourful_print.o

example: example.cpp
	$(CXX) $(CFLAGS) example.cpp -Wl,-rpath=$(LIB_DIR) -L$(LIB_DIR) -l$(TARGET_NAME) -o example

clean:
	rm colourful_print.o lib$(TARGET_NAME).a lib$(TARGET_NAME).so

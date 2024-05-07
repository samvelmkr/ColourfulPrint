CXX=g++
CFLAGS=-Wall -std=c++11 -pedantic
TARGET_NAME=ColourPrint

.PHONY: build clear

build: colourful_print.cpp colourful_print.h
	$(CXX) $(CFLAGS) -fPIC colourful_print.cpp -o lib$(TARGET_NAME).so
	$(CXX) $(CFLAGS) -c colourful_print.cpp
	ar rcs lib$(TARGET_NAME).a colourful_print.o

clear:
	rm colourful_print.o lib$(TARGET_NAME).a lib$(TARGET_NAME).so

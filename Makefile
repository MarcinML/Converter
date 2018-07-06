CC=g++
CFLAGS=-pedantic -Wall -std=c++11
SOURCES= main.cpp konwerterrzymski.cpp konwerterarabski.cpp

all:
	$(CC) $(CFLAGS) $(SOURCES)

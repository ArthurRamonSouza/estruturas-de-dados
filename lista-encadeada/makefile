# *****************************************************
# Variables to control Makefile operation

# you can choose gcc or g++
CC = g++ 

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall

OBJS = Lista-encadeada.o No.o
 
all: main

# The build target
main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) Main.cpp -o main
	rm -f $(OBJS)
	./main

lista-encadeada.o: Lista-encadeada.cpp Lista-encadeada.hpp
	$(CC) $(CFLAGS) -c lista-encadeada.cpp
 
no.o: No.cpp No.hpp
	$(CC) $(CFLAGS) -c No.cpp

clean:
	rm -f $(OBJS)
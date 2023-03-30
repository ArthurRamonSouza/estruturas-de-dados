# *****************************************************
# Variables to control Makefile operation

# you can choose gcc or g++
CC = g++ 

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall

OBJS = PilhaSequencial.o
 
all: main

# The build target
main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) Main.cpp -o main
	rm -f $(OBJS)
	./main

PilhaSequencial.o: PilhaSequencial.hpp PilhaSequencial.cpp
	$(CC) $(CFLAGS) -c PilhaSequencial.cpp

clean:
	rm -f $(OBJS)
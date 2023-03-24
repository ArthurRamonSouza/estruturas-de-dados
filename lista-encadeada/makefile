# *****************************************************
# Variables to control Makefile operation

# you can choose gcc or g++
CC = g++ 

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall
 
# The build target
lista-encadeada: main.o lista-encadeada.o
	$(CC) $(CFLAGS) -o lista-encadeada main.o lista-encadeada.o
 
main.o: main.cpp lista-encadeada.hpp
	$(CC) $(CFLAGS) -c main.cpp 

lista-encadeada.o: lista-encadeada.hpp

clean:
	$(RM) -rf *.o lista-encadeada
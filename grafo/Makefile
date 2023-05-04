# *****************************************************
# Vg++ -g -Wall Main.cpp Grafo.hpp Vertice.hpp -o main

# you can choose gcc or g++
CC = g++ 

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS = -g -Wall

OBJS = Main.o
 
all: main

# The build target
main: $(OBJS)
	$(CC) $(CFLAGS) Main.cpp -o main
	rm -f $(OBJS)
	./main

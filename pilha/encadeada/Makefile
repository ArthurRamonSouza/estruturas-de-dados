# *****************************************************
# Variables to control Makefile operation

# you can choose gcc or g++
CC = g++ 

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall

OBJS = PilhaEncadeada.o ListaEncadeada.o No.o
 
all: main

# The build target
main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) Main.cpp -o main
	rm -f $(OBJS)
	./main

PilhaEncadeada.o: PilhaEncadeada.cpp PilhaEncadeada.hpp
	$(CC) $(CFLAGS) -c PilhaEncadeada.cpp
 
ListaEncadeada.o: ../../lista-encadeada/ListaEncadeada.cpp ../../lista-encadeada/ListaEncadeada.hpp
	$(CC) $(CFLAGS) -c ../../lista-encadeada/ListaEncadeada.cpp

No.o: ../../lista-encadeada/No.cpp ../../lista-encadeada/No.hpp
	$(CC) $(CFLAGS) -c ../../lista-encadeada/No.cpp

clean:
	rm -f $(OBJS)

#g++ Main.cpp PilhaEncadeada.cpp ../../lista-encadeada/ListaEncadeada.cpp ../../lista-encadeada/No.cpp -o main
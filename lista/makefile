all: lista

lista: main.o lista.o
	gcc -o lista main.o lista.o

main.o: main.c lista.h
	gcc -o main.o main.c -c

lista.o: lista.c lista.h
	gcc -o lista.o lista.h -c

clean:
	del -rf *.o *.exe
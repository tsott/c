CFLAGS = -Wall
all: compile link test clean

compile: main.c lib.c lib.h
	cc -c -Wall main.c lib.c

link:	main.o lib.o
	cc -Wall main.o lib.o

test: a.out
	./a.out < test1
	./a.out < test2
clean:  
	rm -f *.o *.out
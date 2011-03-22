CFLAGS = -Wall

all: compile link clean

compile : main.c funkcja.c helpers.h
		gcc -c main.c funkcja.c
		
link: main.o funkcja.o
		gcc main.o funkcja.o -o program
		
test: test1 test2 test3
	cat test1
	./program < test1
	./program < test2
	./program < test3
	
clean:
		rm -f *.o program *~

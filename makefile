all: main.o mystring.o
		gcc -o main mystring.o main.o

mystring.o: mystring.c mystring.h
		gcc -c mystring.c

main.o: main.c mystring.h
		gcc -c main.c

run: main
	./main

.PHONY: clean

clean:
		-rm *.o

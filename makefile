all: main.o mystring.o
		gcc -o main mystring.o main.o

mystring.o: mystring.c mystring.h
		gcc -c mystring.c

main.o: mystring.h
		gcc -c main.c

clean:
		-rm *.o

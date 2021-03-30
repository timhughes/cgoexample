
all:
	gcc -o libperson.so -Wall -g -shared -fPIC person.c
	gcc -o hello -L. hello.c -lperson

run:
	LD_LIBRARY_PATH=. ./hello

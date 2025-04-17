all: automata2.o grid2.o
	gcc -Wall -o automata2.out automata2.o grid2.o
automata2.o : automata2.c grid2.h
	gcc -Wall -c automata2.c
grid2.o : grid2.c grid2.h
	gcc -Wall -c grid2.c
clean :
	rm automata2.o grid2.o automata2.out

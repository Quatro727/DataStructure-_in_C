test: maze_search.o stack.o
	gcc -o test maze_search.o stack.o
maze_search.o: maze_search.c stack.h
	gcc -c maze_search.c
stack.o: stack.c stack.h
	gcc -c stack.c


test: test.o traversal.o
	gcc -o test test.o traversal.o
test.o: test.c traversal.h
	gcc -c test.c 
traversal.o: traversal.c traversal.h
	gcc -c traversal.c

test2: test2.o circular_queue.o
	gcc -o test2 test2.o circular_queue.o
test2.o: test2.c circular_queue.h
	gcc -c test2.c
circular_queue.o: circular_queue.c circular_queue.h	
	gcc -c circular_queue.c

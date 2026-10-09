CC=gcc
CFLAGS=-g -Wall
OBJS=test.o bst.o
TARGET=test

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)
	
test.o: test.c bst.h
bst.o: bst.c bst.h

clean:
	rm -f *.o
	rm -f $(TARGET)

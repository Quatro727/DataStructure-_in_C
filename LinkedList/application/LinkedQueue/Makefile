CC=gcc
CFLAGS=-g -Wall
OBJS=test.o linked_queue.o
TARGET=test

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

test.o: test.c linked_queue.h
linked_queue.o: linked_queue.c linked_queue.h

clean:
	rm -f *.o
	rm -f $(TARGET)

CC=gcc
CFLAGS=-g -Wall
OBJS=test.o linked_stack.o
TARGET=test

$(TARGET) : $(OBJS)
	$(CC) -o $@ $(OBJS)

test.o: test.c linked_stack.h
linked_stack.o: linked_stack.c linked_stack.h

clean:
	rm -f *.o
	rm -f $(TARGET)

CC=gcc
CFLAGS=-g -Wall
OBJS=test.o circular_linked_list.o
TARGET=test.out

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

test.o: test.c circular_linked_list.h
circular_linked_list.o: circular_linked_list.c circular_linked_list.h

clean:
	rm -f *.o
	rm -f $(TARGET)

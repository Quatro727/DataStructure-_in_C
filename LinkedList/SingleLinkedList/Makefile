CC=gcc
CFLAGS=-g -Wall
OBJS=test.o linked_list.o
TARGET=test.out

$(TARGET): $(OBJS)
			 $(CC) -o $@ $(OBJS)

test2.o: test.c linked_list.h
linked_list.o: linked_list.c linked_list.h

clean:
	rm -f *.o
	rm -f $(TARGET)

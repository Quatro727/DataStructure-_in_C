CC=gcc
CFLAGS=-g -Wall
OBJS=test2.o linked_list.o
TARGET=test2.out

$(TARGET): $(OBJS)
			 $(CC) -o $@ $(OBJS)

test2.o: test2.c linked_list.h
linked_list.o: linked_list.c linked_list.h

clean:
	rm -f *.o
	rm -f $(TARGET)

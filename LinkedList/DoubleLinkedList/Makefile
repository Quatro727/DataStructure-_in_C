CC=gcc
CFLAGS=-g -Wall
OBJS=test.o double_linked_list.o
TARGET=test.out

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

test.o: test.c double_linked_list.h
double_linked_list.o: double_linked_list.c double_linked_list.h

clean:
	rm -f *.o
	rm -f $(TARGET)

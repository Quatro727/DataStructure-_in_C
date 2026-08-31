cc=gcc
CFLAGS=-g -Wall
OBJS=test.o list_array.o
TARGET=test.out

$(TARGET): $(OBJS)
		$(CC) -o $@ $(OBJS)

test.o: test.c list_array.h
list_array.o: list_array.c list_array.h

clean: 
		rm -f *.o
		rm -f $(TARGET)

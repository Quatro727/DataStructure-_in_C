CC=gcc
CFLAGS=-g -Wall
OBJS=test.o level_order.o
TARGET=test

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

test.o: test.c level_order.h
level_order.o: level_order.c level_order.h

clean: 
	rm -f *.o
	rm -f $(TARGET)

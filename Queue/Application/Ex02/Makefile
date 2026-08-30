CC=gcc
CFLAGS=-g -Wall
OBJS=bank_simulate.o circular_queue.o
TARGET=bank_simulate

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

bank_simulate.o: bank_simulate.c circular_queue.h
circular_queue: circular_queue.c circular_queue.h

clean: 
		rm -f *.o
		rm -f $(TARGET)

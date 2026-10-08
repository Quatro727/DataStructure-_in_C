CC=gcc
CFALGS=-g -Wall
OBJS=test.o eval.o
TARGET=test

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

test.o: test.c eval.h
eval.o: eval.c eval.h

clean: 
	rm -f *.o
	rm -f $(TARGET)

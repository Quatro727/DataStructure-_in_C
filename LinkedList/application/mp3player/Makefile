CC=gcc
CFLAGS=-g -Wall
OBJS=mp3player.o double_linked_list.o
TARGET=mp3player

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

mp3player.o: mp3player.c double_linked_list.h
double_linked_list.o: double_linked_list.c double_linked_list.h

clean:
	rm -f *.o
	rm -f $(TARGET)

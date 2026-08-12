#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct {
    int front;
    int rear;
    element data[MAX_QUEUE_SIZE];
} Queuetype;

void error(char *message);
void init_queue(Queuetype *q);
void queue_print(Queuetype *q);
bool is_full(Queuetype *q);
bool is_empty(Queuetype *q);
void enqueue(Queuetype *q, element item);
element dequeue(Queuetype *q);


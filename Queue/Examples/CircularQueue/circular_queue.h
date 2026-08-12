#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_QUEUE_SIZE 5

//external variables
typedef int element;

typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queuetype;

//function prototype
void error(char *message);
void init_queue(Queuetype *q);
bool is_empty(Queuetype *q);
bool is_full(Queuetype *q);
void queue_print(Queuetype *q);
void enqueue(Queuetype *q, element item);
element dequeue(Queuetype *q); 
element peek(Queuetype *q);

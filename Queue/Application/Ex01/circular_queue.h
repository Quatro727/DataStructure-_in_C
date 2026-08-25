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
void error(char *message);//error function
void init_queue(Queuetype *q);//intialize queue
bool is_empty(Queuetype *q);//check whether queue is empty or not empty
bool is_full(Queuetype *q);//check whether queue is full or not full
void queue_print(Queuetype *q);//prints the circular-queue's current circumstances
void enqueue(Queuetype *q, element item);//push element to queue
element dequeue(Queuetype *q);// pop one element from queue
element peek(Queuetype *q);//delete specified element from queue

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_QUEUE_SIZE 5

//external variable
typedef struct {
    int id;
    int arrival_time;
    int service_time;//servic time of current client
} element;

typedef struct  {
    element data[MAX_QUEUE_SIZE];
    int front;
    int rear;
} Queuetype;

/* function prototype */
void error(char *message);
void init_queue(Queuetype *q);
bool is_empty(Queuetype *q);
bool is_full(Queuetype *q);
void enqueue(Queuetype *q, element item);
element dequeue(Queuetype *q);
element peek(Queuetype *q);
    

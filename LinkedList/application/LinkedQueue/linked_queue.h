#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* type definition */
typedef int element;
typedef struct QueueNode {
    element data;
    struct QueueNode *link;
} QueueNode;
typedef struct {
    QueueNode *front;
    QueueNode *rear;
} LinkedQueueType;

/* function prototypes */
void init(LinkedQueueType *q);
bool is_empty(LinkedQueueType *q);
void enqueue(LinkedQueueType *q, element data);
element dequeue(LinkedQueueType *q);
void print_queue(LinkedQueueType *q);

#endif

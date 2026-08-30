#include "circular_queue.h"

void error(char *message)
{
    printf("%s\n", message);
    exit(1);
}

void init_queue(Queuetype *q)
{
    q->front = 0;
    q->rear = 0;
}

bool is_empty(Queuetype *q)
{
    return (q->front == q->rear);
}

bool is_full(Queuetype *q)
{
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void enqueue(Queuetype *q, element item)
{
    if(is_full(q)) {
        error("Queue is FULL!!");
    }

    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

element dequeue(Queuetype *q)
{
    if(is_empty(q)) {
        error("Queue is EMPTY!!!");
    }

    q->front = (q->front + 1) % MAX_QUEUE_SIZE;

    return q->data[q->front];
}

element peek(Queuetype *q)
{
    if(is_empty(q)) {
        error("Queue is EMPTY!!!");
    }

    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

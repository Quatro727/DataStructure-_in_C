#include "queue.h" 

void error(char *message)
{
    printf("%s\n", message);
    return;
}

void init_queue(Queuetype *q)
{
    q->rear = -1;
    q->front = -1;
}

void queue_print(Queuetype *q)
{
    for(int i = 0; i < MAX_QUEUE_SIZE; i++){
        if(i <= q->front || i > q->rear)
            printf(" | ");
        else
            printf("%d | ", q->data[i]);
    }
    printf("\n");
}

bool is_full(Queuetype *q)
{
    if(q->rear == MAX_QUEUE_SIZE - 1)
        return true;
    else
        return false;
}

bool is_empty(Queuetype *q)
{
    if(q->front == q->rear)
        return true;
    else
        return false;
}

void enqueue(Queuetype *q, element item)
{
    if(is_full(q)){
        error("Queue is FULL!");
        return;
    }
    else {
        q->data[++(q->rear)] = item;
    }
}

element dequeue(Queuetype *q)
{
    if(is_empty(q)){
        error("Queue is EMPTY!!");
        return -1;
    }
    element item = q->data[++(q->front)];
    return item;
}


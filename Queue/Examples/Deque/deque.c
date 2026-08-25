#include "deque.h"

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

void init_deque(Dequetype *q)
{
    q->front = 0;
    q->rear = 0;
}

bool is_empty(Dequetype *q)
{
    return (q->front == q->rear);
}

bool is_full(Dequetype *q)
{
    return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void deque_print(Dequetype *q)
{
    printf("DEQUE(front=%d, rear=%d) = ", q->front, q->rear);

    if(!is_empty(q)) {
        int i = q->front;

        do {
            i = (i + 1) % MAX_QUEUE_SIZE;
            printf("%d | ", q->data[i]);

            if( i == q->rear) break;
        } while(i != q->front);
    }
    printf("\n");
}

void add_front(Dequetype *q, element item)
{
    if(is_full(q)) {
        error("Queue is FULL!!");
    }
    q->data[q->front] = item;
    q->front = (q->front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
}

void add_rear(Dequetype *q, element item)
{
    if(is_full(q)) {
        error("Queue is FULL!!!");
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->data[q->rear] = item;
}

element delete_front(Dequetype *q)
{
    if(is_empty(q)) {
        error("Queue is EMPTY!!!");
    }
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;

    return q->data[q->front];
}

element delete_rear(Dequetype *q)
{
    int prev = q->rear;

    if(is_empty(q)) {
        error("Queue is EMPTY!!!");
    }

    q->rear = (q->rear -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;

    return q->data[prev];
}

element get_front(Dequetype *q)
{
    if(is_empty(q)) {
        error("Queue is EMPTY!!!");
    }

    return q->data[(q->front + 1) % MAX_QUEUE_SIZE];
}

element get_rear(Dequetype *q)
{
    if(is_empty(q)) {
        error("Queue is EMPTY!!!");
    }

    return q->data[q->rear];
}

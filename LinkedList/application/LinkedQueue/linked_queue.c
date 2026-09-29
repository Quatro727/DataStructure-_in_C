#include "linked_queue.h"

void init(LinkedQueueType *q)
{
    q->front = NULL;
    q->rear = NULL;
}

bool is_empty(LinkedQueueType *q)
{
    return (q->front == NULL);
}

void enqueue(LinkedQueueType *q, element data)
{
    QueueNode *temp = malloc(sizeof(QueueNode));
    if (q == NULL) {
        printf("malloc is failed....\n");
        exit(EXIT_FAILURE);
    }

    temp->data = data;
    temp->link = NULL;

    if (is_empty(q)) {
        q->front = temp;
        q->rear = temp;
    }
    else {
        q->rear->link = temp;
        q->rear = temp;
    }
}

element dequeue(LinkedQueueType *q)
{
    QueueNode *temp = q->front;
    element data;

    if (is_empty(q)) {
        printf("Queue is EMPTY!!!!\n");
        exit(EXIT_FAILURE);
    }
    else {
        data = temp->data;
        q->front = q->front->link;

        if (q->front == NULL)
            q->rear = NULL;

        free(temp);

        return data;
    }
}

void print_queue(LinkedQueueType *q)
{
    QueueNode *p;

    for (p = q->front; p != NULL; p = p->link)
        printf("%d->", p->data);
    printf("NULL\n");
}

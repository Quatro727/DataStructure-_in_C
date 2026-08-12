#include "queue.h"

int main(void)
{
    element item = 0;
    Queuetype q;

    init_queue(&q);

    enqueue(&q, 10);
    queue_print(&q);

    enqueue(&q, 20);
    queue_print(&q);
    
    enqueue(&q, 30);
    queue_print(&q);
    
    item = dequeue(&q);
    queue_print(&q);

    item = dequeue(&q);
    queue_print(&q);

    item = dequeue(&q);
    queue_print(&q);

    return 0;
}


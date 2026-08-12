#include "circular_queue.h"

int main(void)
{
    Queuetype queue;
    int element;

    init_queue(&queue);
    printf("--data append step--\n");
    while(!is_full(&queue)) {
        printf("Enter the integer: ");
        scanf("%d", &element);
        enqueue(&queue, element);
        queue_print(&queue);
    }

    printf("Queue is FULL!!\n\n");

    printf("--Data delete step--\n");
    while(!is_empty(&queue)) {
        element = dequeue(&queue);
        printf("Popped integer: %d\n", element);
        queue_print(&queue);
    }
    printf("Queue is EMPTY!!\n");

    return 0;
}

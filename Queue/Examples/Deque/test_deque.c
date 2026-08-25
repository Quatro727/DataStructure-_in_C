#include "deque.h"

int main(void)
{
    int i;
    Dequetype queue;

    init_deque(&queue);

    for(i = 0; i < 3; i++) {
        add_front(&queue, i);
        deque_print(&queue);
    }

    for(i = 0; i < 3; i++) {
        delete_rear(&queue);
        deque_print(&queue);
    }
    return 0;
}

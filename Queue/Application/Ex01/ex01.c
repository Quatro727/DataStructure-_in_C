/********************************************
 * Using Queue as a Buffer
 * -push a random number in 20% ratio to Queue
 * -pop an element in 10% ratio from Queue
 *  *****************************************/

#include "circular_queue.h"
#include <time.h>

int main(void)
{
    Queuetype queue;
    int i, element;

    init_queue(&queue);
    srand(time(NULL));//initialize the random numbers

    for(i = 0; i < 100; i++) {
        //if random number is divided by 5 
        if(rand() % 5 == 0) {
            enqueue(&queue, rand() % 100);
        }
        queue_print(&queue);

        //if random number is divided by 10
        if(rand() % 10 == 0) {
            int data = dequeue(&queue);
        }
        queue_print(&queue);
    }

    return 0;
}

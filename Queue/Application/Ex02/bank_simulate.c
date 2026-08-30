#include "circular_queue.h"
#include <time.h>

int main(void)
{
    int minutes = 60;
    int total_wait = 0;
    int total_customers = 0;
    int service_time = 0;
    int service_customer;
    Queuetype queue;
    
    init_queue(&queue);

    srand(time(NULL));

    for(int clock = 0; clock < minutes; clock++) {
        printf("Current time: %d\n", clock);
        
        //if random number is lower than 3 -> it means a new customer is entered
        if(rand() % 10 < 3) {
            //create a new structure for new customer
            element customer;
            //copy the info to customer structure
            customer.id = total_customers++;
            customer.arrival_time = clock;
            customer.service_time =rand() % 3 + 1;
            //add the new structure created 
            enqueue(&queue, customer);

            printf("Customer %d is entering at %dminutes. time required: %dminutes\n",
                    customer.id, customer.arrival_time, customer.service_time);
        }
        
        //if service_time is greater then 0 ->it means some customer is still handling his task
        if(service_time > 0) {
            printf("Currently handling Customer %d's task.\n", service_customer);
            service_time--;
        }
        //if service_time is lower than 0-> it means there is no customer handling their task
        else {
            if(!is_empty(&queue)) {
                //pop a customer structure and begin it
                element customer = dequeue(&queue);

                service_customer = customer.id;
                service_time = customer.service_time;

                printf("Customer %d is begining his task at %d. Waiting time: %d\n",
                        customer.id, clock, clock - customer.arrival_time);
                total_wait += clock - customer.arrival_time;
            }
        }
    }

    printf("Total waiting time: %d\n", total_wait);

    return 0;
}

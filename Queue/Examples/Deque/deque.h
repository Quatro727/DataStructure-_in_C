#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //C99

#define MAX_QUEUE_SIZE 5

typedef int element;
typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front, rear;
} Dequetype;

//function prototype
void error(char *message);
void init_deque(Dequetype *q);
bool is_empty(Dequetype *q);
bool is_full(Dequetype *q);
void deque_print(Dequetype *q);
void add_front(Dequetype *q, element item);
void add_rear(Dequetype *q, element item);
element delete_front(Dequetype *q);
element delete_rear(Dequetype *q);
element get_front(Dequetype *q);
element get_rear(Dequetype *q);


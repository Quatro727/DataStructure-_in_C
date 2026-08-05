#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define MAX_STACK_SIZE 100

typedef struct {
    short r;
    short c;
} element;

typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} Stacktype;

void init_stack(Stacktype *s);
bool is_empty(Stacktype *s);
bool is_full(Stacktype *s);
void push(Stacktype *S, element item);
element pop(Stacktype *s);
element peek(Stacktype *s);

#endif



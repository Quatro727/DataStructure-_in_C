#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef char element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} Stacktype;

//prototype of stack's functions
void init_stack(Stacktype* s);
int is_empty(Stacktype* s);
int is_full(Stacktype* s);
void push(Stacktype* s, element item);
element pop(Stacktype* s);
element peek(Stacktype* s);

#endif

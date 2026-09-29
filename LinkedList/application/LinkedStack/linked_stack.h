#ifndef LINKED_STACK_H
#define LINKED_STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <malloc.h>

/* type definition */
typedef int element;
typedef struct StackNode {
    element data;
    struct StackNode *link;
} StackNode;
typedef struct {
    StackNode *top;
} LinkedStackType;

/* function prototypes */
void init(LinkedStackType *s);
bool is_empty(LinkedStackType *s);
void push(LinkedStackType *s, element item);
element pop(LinkedStackType *s);
void print_stack(LinkedStackType *s);

#endif

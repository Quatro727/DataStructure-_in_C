#include "linked_stack.h"

void init(LinkedStackType *s)
{
    s->top = NULL;
}

bool is_empty(LinkedStackType *s)
{
    return (s->top == NULL);
}

void push(LinkedStackType *s, element item)
{
    StackNode *temp = malloc(sizeof(StackNode));

    temp->data = item;
    temp->link = s->top;
    s->top = temp;
}

element pop(LinkedStackType *s)
{
    element item;

    if (is_empty(s)) {
        printf("Stack is EMPTY!!!\n");
        exit(EXIT_FAILURE);
    }
    else {
        StackNode *temp = s->top;
        
        item = temp->data;
        s->top = s->top->link;
        free(temp);

        return item;
    }
}

void print_stack(LinkedStackType *s)
{
    StackNode *p;

    for (p = s->top; p != NULL; p = p->link)
        printf("%d->", p->data);

    printf("NULL \n");
}

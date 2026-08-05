#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

static void terminate(const char *message){
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void init_stack(Stacktype *s){
    s->top = -1;
}

bool is_empty(Stacktype *s){
    return s->top == -1;
}

bool is_full(Stacktype *s){
    return s->top == (MAX_STACK_SIZE - 1);
}

void push(Stacktype *s, element item){
    if(is_full(s)){
        terminate("Error in push: stack is full.");
    }
    else {
        s->data[++(s->top)] = item;
    }
}

element pop(Stacktype *s){
    if(is_empty(s)){
        terminate("Error in pop: stack is empty.");
    }
    else {
        return s->data[(s->top)--];
    }
}

element peek(Stacktype *s){
    if(is_empty(s)){
        terminate("Error in peek: stack is empty.");
    }
    else {
        return s->data[s->top];
    }
}

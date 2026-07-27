#include "stack.h"

void init_stack(Stacktype *s){
    s->top = -1;
}
int is_empty(Stacktype *s){
    return (s->top == -1);
}
int is_full(Stacktype *s){
    return (s->top ==MAX_STACK_SIZE - 1);
}
void push(Stacktype *s, element item){
    if(is_full(s)){
        fprintf(stderr, "Stack is FULL!!\n");
        return;
    }
    else s->data[++(s->top)] = item;
}
element pop(Stacktype *s){
    if(is_empty(s)){
        fprintf(stderr, "Stack is EMPTY!!\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}
element peek(Stacktype *s){
    if(is_empty(s)){
        fprintf(stderr, "Stack is EMPTY!!!\n");
        exit(1);
    }
    else return s->data[s->top];
}



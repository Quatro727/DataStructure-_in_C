#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
    element *data;
    int capacity;
    int top;
} stacktype;

void init_stack(stacktype *s);
int is_empty(stacktype *s);
int is_full(stacktype *s);
void push(stacktype *s, element item);
element pop(stacktype *s);
void delete(stacktype *s);

int main(void){
    stacktype s;

    init_stack(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    printf("%d\n", pop(&s));
    
    free(s.data);

    return 0;
}
void init_stack(stacktype *s){
    s->top = -1;
    s->capacity = 1;
    s->data = (element*)malloc(sizeof(element));
}
int is_empty(stacktype *s){
    return (s->top == -1);
}
int is_full(stacktype *s){
    return (s->top == (s->capacity - 1));
}
void push(stacktype *s, element item){
    if(is_full(s)){
        s->capacity *= 2;//when the capacity of stack is full -> expand 2 times 
        s->data = (element*)realloc(s->data, s->capacity * sizeof(element));//and make more space for stack to store
    }
    s->data[++(s->top)] =item;
}
element pop(stacktype *s){
    if(is_empty(s)){
        fprintf(stderr, "Stack is EMPTY!!!\n");
        exit(1);
    }
    else return s->data[(s->top)--];
}
void delete(stacktype *s){
    free(s);
}

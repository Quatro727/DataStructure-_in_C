#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE  100//MAX size of stack

typedef int element;//typedef of stack

element stack[MAX_STACK_SIZE];
int top = -1;

//functions that stack can act
int is_empty();//check whether stack is empty or not
int is_full();//check wheher stack is full or not
void push(element item);//input the item to top of stack
element pop();//bring out the top element from stack

int main(void){
    push(1);
    push(2);
    push(3);
    
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}

int is_empty(){
    return (top == -1);
}
int is_full(){
    return (top == MAX_STACK_SIZE - 1);
}
void push(element item){
    if(is_full()){
        fprintf(stderr, "Stack if full!!\n");
        return;
    }
    else {
        top++;
        stack[top] = item;
    }
}
element pop(){
    if(is_empty()){
        fprintf(stderr, "Stack is empty!!!\n");
        exit(1);
    }
    else return stack[top--];
}
element peek(){
    if(is_empty()){
        fprintf(stderr, "Stack is empty!!!\n");
        exit(1);
    }
    else return stack[top];
}

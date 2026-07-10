#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
#define MAX_STRING 100

typedef struct {
    int student_num;
    char name[MAX_STRING];
    char address[MAX_STRING];
} element;

element stack[MAX_STACK_SIZE];
int top = -1;

int is_empty();
int is_full();
void push(element item);
element pop();
element peek();

int main(void){
    element ie ={ 20170000,
                  "Lionel Messi",
                  "Los Angelus"};
    element oe;

    push(ie);
    oe = pop();

    printf("Student code: %d\n", oe.student_num);
    printf("Student name: %s\n", oe.name);
    printf("Home address: %s\n", oe.address);

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
        fprintf(stderr, "Stack is FULL!!!\n");
        return;
    }
    else stack[++top] = item;
}
element pop(){
    if(is_empty()){
        fprintf(stderr, "Stack is EMPTY!!!\n");
        exit(1);
    }
    else return stack[top--];
}
element peek(){
    if(is_empty()){
        fprintf(stderr, "Stack is FULL!!\n");
        exit(1);
    }
    else return stack[top];
}


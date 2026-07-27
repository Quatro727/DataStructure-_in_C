#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef char element;
typedef struct {
    element data[MAX_STACK_SIZE];
    int top;
} Stacktype;

void init_stack(Stacktype* s);
int is_empty(Stacktype* s);
int is_full(Stacktype* s);
void push(Stacktype* s, element item);
element pop(Stacktype* s);
element peek(Stacktype* s);
int check_matching(const char*);

int main(void){
    char* p = "{ A[(i+1)]=0; }";

    if(check_matching(p) == 1) {
        printf("%s is Normal string.\n", p);
    }
    else {
        printf("Abnormal: parentheses aren't matched!!\n");
    }
    return 0;
}

int check_matching(const char* input){
    Stacktype s;
    char ch, open_ch;
    int i, n = strlen(input);

    init_stack(&s);

    for(i = 0; i < n; i++){
        ch = input[i];
        
        switch(ch) {
            case '(': case '[': case '{':
                push(&s, ch);
                break;
            case ')': case']': case '}':
                if(is_empty(&s)) return 0;
                else {
                    open_ch = pop(&s);
                    if ((ch == ')' && open_ch != '(') ||
                        (ch == ']' && open_ch != '[') || 
                        (ch == '}' && open_ch != '{')) {
                        return 0;
                    }
                    break;
                }
            default: break;
        }
   }
   if(!is_empty(&s)) return 0;

   return 1;
}

void init_stack(Stacktype* s){
    s->top = -1;
}

int is_empty(Stacktype* s){
    return (s->top == -1);
}

int is_full(Stacktype* s){
    return (s->top == (MAX_STACK_SIZE - 1));
}

void push(Stacktype* s, element item){
    if(is_full(s)){
        fprintf(stderr, "Stack is full!!\n");
        return;
    }
    else {
        s->data[++(s->top)] = item;
    }
}

element pop(Stacktype* s){
    if(is_empty(s)){
        fprintf(stderr, "Stack is empty!!\n");
        exit(1);
    }
    else {
        return s->data[(s->top)--];
    }
}

element peek(Stacktype* s){
    if(is_empty(s)) {
        fprintf(stderr, "Stack is empty!!\n");
        exit(1);
    }
    else {
        return s->data[s->top];
    }
}


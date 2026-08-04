#include <string.h>
#include "stack.h"

int prec(char op);
void infix_to_postfix(char exp[]);


int main(void){
    char s[] = "(2+3)*4+9";

    printf("Infix form: %s\n", s);
    printf("Postfix form:");
    infix_to_postfix(s);

    printf("\n");
    return 0;
}
//return a value of priority of operator
int prec(char op){
    switch (op) {
        case '(': case ')': return 0;
        case '+': case '-': return 1;
        case '*': case '/': return 2;
        }
    return -1;
}
//modify the infix form to postfix form
void infix_to_postfix(char exp[]){
    int i = 0;
    char ch, top_op;
    int len = strlen(exp);
    Stacktype s;
    
    //Initialize stack: top is pointing -1 which means stack is empty.
    init_stack(&s);
    
    //modifying the infix form to postfix form considering the priority of operator.
    for(i = 0; i < len; i++){
        ch = exp[i];
        switch(ch) {
            //operator
            case '+':
            case '-':
            case '*':
            case '/':
                 //comparing the priority of operator in stack to the priority of current operator
                 while(!is_empty(&s) && (prec(ch) <= prec(peek(&s)))){
                     printf("%c", pop(&s));//if stack's priority is high then print
                 }
                //if priority is low then push the operator to stack.
                push(&s, ch);
                break;
            //when current character is '('
            case '(':
                push(&s, ch);
                break;
            //when current character is ')'
            case ')':
                top_op = pop(&s);
                //print all operator until meet character '('
                while(top_op != '(') {
                    printf("%c", top_op);
                    top_op = pop(&s);
                }
                break;
            default:
                printf("%c", ch);
                break;
        }
    }
    //print the operator stored in stack
    while(!is_empty(&s)) {
        printf("%c", pop(&s));
    }
}



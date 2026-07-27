#include <string.h>
#include "stack.h"

int eval_postfix(char exp[]);

int main(void){
    int result;

    printf("Postfix expression is 82/3-32*+\n");

    result = eval_postfix("82/3-32*+");

    printf("Result = %d\n", result);

    return 0;
}

int eval_postfix(char exp[]){
    int op1, op2, value, i = 0;
    int len = strlen(exp);
    char ch;
    Stacktype s;

    init_stack(&s);
    for(i = 0; i < len; i++){
        ch = exp[i];
        if(ch != '+' && ch != '-' && ch != '*' && ch != '/') {
            value = ch - '0';
            push(&s, value);
        }
        else {
            op2 = pop(&s);
            op1 = pop(&s);

            switch(ch) {
                case '+': push(&s, op1 + op2); break;
                case '-': push(&s, op1 - op2); break;
                case '*': push(&s, op1 * op2); break;
                case '/': push(&s, op1 / op2); break;
            }
        }
    }
    return pop(&s);
}



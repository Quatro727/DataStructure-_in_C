#include <stdio.h>

void unknown();

int main(){

    unknown();

    return 0;
}

void unknown(){
    int ch;
    if ((ch = getchar()) != '\n') unknown();
    putchar(ch);
}

#include <stdio.h>

void asterik(int);

int main(){

    asterik(5);
    
    return 0;
}

void asterik(int i){
    if (i > 1){
        asterik(i / 2);
        asterik(i / 2);
    }
    printf("*");
}

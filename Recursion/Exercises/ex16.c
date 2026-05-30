/* convert recursional design to iterative design */
#include <stdio.h>

int sum(int);

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("ResultL: %d\n", sum(num));

    return 0;
}

int sum(int n){
    int total = 0;

    for (int i = 0; i <= n; i++){
        total += i;
    }
    return total;
}


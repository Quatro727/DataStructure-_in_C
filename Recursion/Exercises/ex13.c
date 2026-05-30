#include <stdio.h>

int sum(int);

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Result: %d\n", sum(num));

    return 0;
}

int sum(int n){
    if (n == 1) return 1;
    else return (n + sum(n - 1));
}

#include <stdio.h>

double sum(int);

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Result: %f\n", sum(num));

    return 0;
}

double sum(int n){
    double num = (double)n;

    if (n == 1) return 1;
    else return (1 / num + sum(n - 1));
}


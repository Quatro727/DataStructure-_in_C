/*Fibonacci sequence(using iteration)*/
#include <stdio.h>

int fibo_iter(int);

int main(){
    int num;

    printf("Input number: ");
    scanf("%d", &num);

    int result = fibo_iter(num);

    printf("Result: %d\n", result);

    return 0;
}

int fibo_iter(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    int pp = 0;
    int p = 1;
    int result = 0;

    for (int i = 2; i <= n;i++){
        result = pp + p;
        pp = p;
        p = result;
    }
    return result;
}

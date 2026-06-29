#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int fibo(int);
int fibo2(int);

int main(void){
    int num;
    double time_recur, time_iter;
    clock_t start, stop;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    start = clock();
    printf("fibo(%d)=%d\n", num, fibo(num));
    stop = clock();
    time_recur = (double)(stop - start);

    start = clock();
    printf("fibo(%d)=%d\n", num, fibo2(num));
    stop = clock();
    time_iter = (double)(stop - start);

    printf("Time for recursion: %f초.\n", time_recur);
    printf("Time for iteration: %f초.\n", time_iter);

    return 0;
}

int fibo(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return (fibo(n - 1) + fibo(n - 2));
}

int fibo2(int n){

    if (n == 0) return 0;
    if (n == 1) return 1;
    
    int pp = 0;
    int p = 1;
    int result = 0;

    for (int i = 2; i <= n; i++){
        result = p + pp;
        pp = p;
        p = result;
    }
    
    return result;
}

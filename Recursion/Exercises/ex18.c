#include <stdio.h>

int ackermann(int, int);

int main(void){
    int m,n;
    
    printf("Enter 2 integers: ");
    scanf("%d %d", &m, &n);
    
    printf("A(%d, %d) = %d\n", m, n, ackermann(m,n));

    return 0;
}

int ackermann(int m, int n){
    if (m < 0 || n < 0) return -1;
    else if (m == 0) return (n + 1);
    else if(n == 0) return ackermann(m - 1, 1);
    else return ackermann(m - 1, ackermann(m, n - 1));
}



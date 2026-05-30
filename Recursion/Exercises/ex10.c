#include <stdio.h>

int recursive (int);

int main(){
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = recursive(num);

    printf("Recursive results: %d\n", result);

    return 0;
}

int recursive(int n){
    if (n != 1) recursive(n - 1);
    printf("%d\n", n);
}


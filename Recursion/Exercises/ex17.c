/* Implement binomial coefficient function */
#include <stdio.h>

int binom_coeff(int, int);

int main(){
    int n,k;

    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);

    printf("Result: %d\n", binom_coeff(n, k));

    return 0;
}
/*******************************************************************
 * resursion version
 *   int binom_coeff(int n, int k){
 *       if (k == 0 || k == n) return 1;
 *       else if (k > 0 && k < n){
 *           return (binom_coeff(n - 1, k - 1) + binom_coeff(n - 1, k));
 *       }
 *  }
********************************************************************/
//iteration version
int binom_coeff(int n, int k){
    int nom = 1;
    int denom = 1;
    for(int i = n; i >= (n -k + 1); i--){
        nom *= i;
    }
    for(int i = k; i >= 1; i--){
        denom *= i;
    }
    
    return (nom / denom);
}

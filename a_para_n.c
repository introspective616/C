#include <stdlib.h>
#include <stdio.h>

int main() {
    long long int a, n, soma;
    printf("\nColoque um valor inteiro: ");
    scanf("%lld", &n);
    printf("\nA = ");
    for(a = 1; a <= n; a += 1){
        if(a < n)
            printf("%lld + ", a);
        else 
            printf("%lld ", a);
        soma += a;
        if(a == n)
            printf("= %lld", soma);
    }
    
}
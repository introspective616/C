#include <stdlib.h>
#include <stdio.h>

int main() {
    long long int a, n, soma;
    printf("\nColoque um valor inteiro: ");
    scanf("%lld", &n);
    if(n > 1){
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
    else if(n <= 0) {
        printf("\nValor não pode ser zero ou inferior para o programa\n");
    }
    else 
        printf("\nA = 1");
}
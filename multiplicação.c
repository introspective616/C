#include <stdio.h>

int main() {
    int n1, n2, multiplo, conta = 0;
    printf("\ninsira 2 numeros para multiplicação: ");
    scanf("%d%d", &n1, &n2);

    while(conta < n1) {
        multiplo+=n2;
        conta++;
    }
    printf("\n%d * %d = %d", n1, n2, multiplo);
}
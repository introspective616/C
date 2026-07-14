#include <stdio.h>

int main() {
    int n, contaN, contaP;

    do{
        printf("\ndigite um número positivo ou negativo(0 para sair): ");
        scanf("%d", &n);
        if(n < 0)
            contaN++;
        else if(n > 0)
            contaP++;
    }while(n != 0);

    printf("\nPositivos: %d\nNegativos: %d\n", contaP, contaN);
}
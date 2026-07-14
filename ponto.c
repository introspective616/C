#include <stdio.h>

int main() {
    char ponto = '*', acumulo;
    int linha, contaP;

    for(linha = 1; linha <= 10; linha++){
        
        for(contaP = 0; contaP <= 20; contaP++) {
            printf("%c", ponto);
        }
        printf("\n");
    }
    
}
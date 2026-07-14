#include <stdio.h>

int main() {
    int n, ver = 2, roda, verificador = 0;

    do {
        printf("\nColoque um número maior que 1 para a verificação: ");
    scanf("%d", &n);
    }while(n<=2);

    if(n != 2) {

        while(ver < n) {
            if (n % ver == 0) {
                verificador =1; //uma flag(variavel de controle) que vai fazer a determinação baseado no que este if entregar, isto sendo, se ele é divisovel por qualquer outro número que não sí mesmo
                break;
            }
            ver++;
            
        }
        if(verificador == 1){
            printf("\n%d não é um número primo", n);
        }
        else {
            printf("\n%d é um número primo", n);
        }
    }

    else {
        printf("\n%d É um número primo", n);
    }
     
}
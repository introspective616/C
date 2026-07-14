#include <stdio.h>

int main() {
    int x, y, quebra = 0;
    do{
        printf("\nInsira coordenadas: ");
        scanf("%d%d", &x, &y);

        if (x > 0 && y < 0) {
            printf("\nPrimeiro");
        }
        else if (x > 0 && y > 0) {
            printf("\nSegundo");
        }
        else if (x < 0 && y > 0) {
            printf("\nTerceiro");
        }
        else if (x < 0 && y < 0) {
            printf("\nQuarto");
        }
        else {
            quebra = 1; //flag usada para definir o final para caso se um dos requisitos não for cumprido.
        }
    }while(quebra == 0);

}
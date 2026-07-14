#include <stdio.h>

int main() {
    char ponto = '*';
    int repet, pLaço;

    for(repet = 1; repet <= 8; repet++){
        for(pLaço = 0; pLaço < repet; pLaço++) {
            printf("%c", ponto);
           
        }
        printf("\n");
    }
}
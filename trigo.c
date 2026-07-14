#include <stdio.h>

int main() {

    unsigned long long int graos = 1, conta;
    for (conta = 1; conta < 64; conta++) {

        if (graos == 1) {
            graos++;
        }

        else {
            graos*=2;
        }
    
    }

    printf("\nA quantidade de grãos que o monge deve receber é: %llu", graos);
    
}
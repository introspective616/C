#include <stdio.h>

int main() {
    int anos = 0;
    float alturaC = 1.50, alturaZ = 1.10;

    while (alturaZ <= alturaC) {

        alturaC += 0.02;
        alturaZ += 0.03;
        anos++;
    
    }
    printf("\naltura Zé: %.2f", alturaZ);
    printf("\nDemorou %d anos para Zé ultrapassar Chico", anos);
}
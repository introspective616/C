#include <stdio.h>

int main() {
    int idade, contaI, alunos, conta20, con170;
    float altura, contaA, mI, mA;

    while(alunos < 45){
        printf("\nColoque altura e idade do aluno: ");
        scanf("%f%d", &altura, &idade);

        if(idade > 20){
            contaA += altura;
            conta20 += 1;
        }
        if(altura < 1.70) {
            contaI += idade;
            con170 += 1;
        }
        alunos += 1;
    }
    mA = contaA / conta20;
    mI = (float)contaI / con170;
    printf("\nOs alunos com mais de 20 anos são: %d\nE a altura média deles é: %.2f", conta20, mA);
    printf("\nOs alunos com menos de 1,70 são: %d\nE a idade média deles são: %.1f", con170, mI);
}
#include <stdio.h>

int main() {
    char sexo;
    int idade, pessoas, conP = 0, reserva, m2000, maiorI, menorI;
    float salario, mediaS;

    do {printf("\nColoque a quantidade de pessoas que participaram da pesquisa: ");
    scanf("%d", &pessoas);
    }while(pessoas < 1);

    while(conP < pessoas) {
        printf("\n\tDados do participante");
        printf("\nColoque o sexo: ");
        scanf(" %c", &sexo);
        printf("\nColoque a idade: ");
        scanf("%d", &idade);
        printf("\nColoque o sálario: ");
        scanf("%f", &salario);

        if((sexo == 'm' || sexo == 'M') && salario <= 2000.00)
            m2000 += 1;
        if(idade > maiorI) {
            reserva = maiorI;
            maiorI = idade;
        }
        else if (idade < maiorI) {
            if(menorI == 0)
                menorI = idade;
            else if(idade < menorI)
                menorI = idade; 
        
        }
        if(reserva < menorI) {
            
            if (reserva > 0) {
                menorI = reserva;
            }
            
        }
        mediaS += salario;
        conP++;
        
    }
    mediaS /= pessoas;
    printf("\nA média de sálario do grupo é: %.2f\nA maior idade do grupo é: %d\nA menor idade do grupo é: %d\nA quantidade de mulheres com sálario até R$ 2000 é: %d", mediaS, maiorI, menorI, m2000);
    
}
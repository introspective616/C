#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, num1, num2, num_mais, a = 0, b, c = 0, reservado, soma_final;
    char confirmacao;

    do {

        printf("\n Escolha uma opção da calculadora:\n1 - somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        scanf("%d", &i);
        switch (i) {
            case 1: {
            num1 = 0;
            num2 = 0;
            printf("\n\tDigite o número: ");
            scanf("%d", &num1);
            printf("\n\t%d + ", num1);
            scanf("%d", &num2);
            getc(stdin);
            b = num1 + num2;
            c = b;
            printf("\n\t%d + %d = %d\n", num1, num2, b);
            printf("\nDeseja adicionar mais números para a soma?clique enter no caso de sim e qualquer outra tecla no caso de não\n");
            confirmacao = getc(stdin);
            while(confirmacao == '\n'){
                printf("\n\t%d + ", c);                    scanf("%d", &num_mais);
                getc(stdin);
                printf("\n\t%d + %d = %d\n", c, num_mais, c + num_mais);
                c += num_mais;
                b = 0; 
                confirmacao = getc(stdin);
                }
            break;
        }
        case 2: {
            num1 = 0;
            num2 = 0;
            printf("\nDigite número: ");
            scanf("%d", &num1);
            printf("\n\t%d - ", num1);
            scanf("%d", &num2);
            getc(stdin);
            b = num1 - num2;
            c = b;
            printf("\n\t%d - %d = %d\n", num1, num2, b);
            printf("\nDeseja adicionar mais números para a subtração?clique enter no caso de sim e qualquer outra tecla no caso de não\n");
            confirmacao = getc(stdin);
            
            while(confirmacao == '\n'){
                printf("\n\t%d - ", c);
                scanf("%d", &num_mais);
                getc(stdin);
                printf("\n\t%d - %d = %d", c, num_mais, c - num_mais);
                c -= num_mais;
                b = 0;
                confirmacao = getc(stdin);
            }
        break;
        }
        case 3: {
            num1 = 0;
            num2 = 0;
            printf("\nDigite a multiplicação: \n");
            scanf("%d", &num1);
            printf("\t%d * ", num1);
            scanf("%d", &num2);
            getc(stdin);
            printf("\n\t %d * %d = %d", num1, num2, num1 * num2);
            b = num1 * num2;
            c = b;
            printf("\n\nadicionar mais valores a multiplicação(clique apenas enter se se sim, ou coloque qualquer coisa se não)\n");
            confirmacao = getc(stdin);
           

            while (confirmacao == '\n') {
                printf("\n\t%d * ", c);
                scanf("%d", &num_mais);
                getc(stdin);
                printf("\n\t%d * %d = %d", c, num_mais, c * num_mais);
                c *= num_mais;
                b = 0;
                confirmacao = getc(stdin);
            }
            break;
        }
        
        case 4: {
            num1 = 0;
            num2 = 0;
            printf("\n\tDigite a divisão: ");
            scanf("%d", &num1);
            if(num1 == 0)
                while (num1 == 0) {
                printf("\nNúmero 0 não é possivel dividir, coloque outro: ");
                scanf("%d", &num1);
                }
                
            printf("\n\t%d / ", num1);
            scanf("%d", &num2);
            if(num2 == 0)
                while (num2 == 0) {
                printf("\nNúmero 0 não é possivel dividir, coloque outro: ");
                scanf("%d", &num2);
                }
            getc(stdin);
            b = num1 / num2;
            printf("\n\t%d / %d = %d",num1, num2, b);
            c = b;
            printf("\n\nadicionar mais valores a divisão(clique apenas enter se se sim, ou coloque qualquer coisa se não)\n");
            confirmacao = getc(stdin);

            while (confirmacao == '\n') {
                printf("\n\t%d / ", c);
                scanf("%d", &num_mais);
                if(num_mais == 0)
                    while (num_mais == 0) {
                    printf("\nNúmero 0 não é possivel dividir, coloque outro: ");
                    scanf("%d", &num_mais);
                    }
                getc(stdin);
                printf("\n\t%d / %d = %d\n", c, num_mais, c / num_mais);
                c /= num_mais;
                b = 0;
                confirmacao = getc(stdin);
            }
            break;
            }
            default:
            printf("\nOpção invalida, escolha novamente\n");
        }
    }while(i != 0); //
    switch (i) {
        case 0: {
            printf("\nSaindo...\n");
            break;
        }
    }
    return 0;
}

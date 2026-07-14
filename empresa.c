#include <stdio.h>

int main() {
    int func, conFun = 0;
    float salario, salarioA = 0, salarioB = 0, mSalarial = 0, reserva = 0; 

    do {
        printf("\ncoloque a quantidade de funcionarios: ");
        scanf("%d", &func);
    }while(func < 1);

    while(conFun < func) {
        printf("\nColoque o salário do fúncionario: ");
        scanf("%f", &salario);

        if(salario > salarioA) {
            reserva = salarioA;
            salarioA = salario;
        }
        else if(salario < salarioA) {
            if(salarioB == 0)
                salarioB = salario;
            else if (salario < salarioB)
                salarioB = salario;
        }
        if (reserva > 0) {
            if(reserva < salarioB)
                salarioB = reserva;
        
        }
        mSalarial += salario;
        conFun++;
        salario = 0;
    }
    mSalarial /= func;
    printf("\nA média salarial é R$%.2f\nO maior sálario é: R$%.2f\nO menor sálario é: R$%.2f\n", mSalarial, salarioA, salarioB);
}
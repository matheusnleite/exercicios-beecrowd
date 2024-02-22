#include <stdio.h>

int main(){
    float salario, nsalario, reajuste;

    scanf("%f",&salario);
    
    if (0<=salario && salario<=400.00)
    {
        reajuste = 0.15*salario;
        nsalario = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",nsalario,reajuste);
        return 0;
    }
    if (400.01<=salario && salario<=800.00)
    {
        reajuste = 0.12*salario;
        nsalario = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",nsalario,reajuste);
        return 0;
    }
    if (800.01<=salario && salario<=1200.00)
    {
        reajuste = 0.10*salario;
        nsalario = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",nsalario,reajuste);
        return 0;
    }
     if (1200.01<=salario && salario<=2000.00)
    {
        reajuste = 0.07*salario;
        nsalario = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",nsalario,reajuste);
        return 0;
    }
     if (2000.01<salario)
    {
        reajuste = 0.04*salario;
        nsalario = salario + reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",nsalario,reajuste);
        return 0;
    }
    

}
#include <stdio.h>

int main(){

    typedef struct 
    {
        double preco;
        char nome[51];
    }orcamento;

    orcamento n[4];
    int cmenor;
    double  menor=0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%lf %[^\n]s",&n[i].preco,n[i].nome);
        getchar();

        if (i == 0 || n[i].preco<menor) //necessario o i == 0 para que ele atribua o valor da primeira posição ao menor, pois se n]ao a condição nunca sera verdadeira
        {
            menor = n[i].preco;
            cmenor=i;
        }
        
        
    }

    printf("%.2lf %s\n",menor,n[cmenor].nome);
    
    
    
}
#include <stdio.h>
#include <math.h>

int main(){
    int G,num;

    scanf("%d",&G);

    int linhas = pow(2,G);

    int tabela [G][linhas];

    for (int i = 0; i < pow(2,G) ; i++)
    {
        num=i;
        for (int j = 0; j < G; j++)
        {
            tabela[i][j] = num%2;
        }
        
    }

    for (int i = 0; i < pow(2,G) ; i++)
    {
        num=i;
        for (int j = 0; j < G; j++)
        {
            printf("%d ",tabela[i][j]);
        }
        
    }
    
}
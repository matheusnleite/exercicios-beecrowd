#include <stdio.h>

int main(){
    float M[12][12],media=0,soma=0;
    char t;
    int cont=0;


    scanf(" %c",&t);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f",&M[i][j]);
            if (j+1<12-i)
            {
                soma = soma + M[i][j];
                cont++;
            }
            
        }
        
    }

        
        
        
    if (t=='M')
    {
        media = soma/cont;
        printf("%.1f\n",media);
        
    }else if (t=='S')
    {
        printf("%.1f\n",soma);
    }
    
    
    
    
}
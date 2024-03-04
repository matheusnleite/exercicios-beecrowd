#include <stdio.h>

int main(){
    float M[12][12],media=0,soma=0;
    char t;
    int l;

    scanf("%d",&l);
    scanf(" %c",&t);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f",&M[i][j]);
        }
        
    }

        for (int i = 0; i < 12; i++)
        {
            soma = soma + M[l][i];
        }
        
        
    if (t=='M')
    {
        media = soma/12;
        printf("%.1f\n",media);
        
    }else if (t=='S')
    {
        printf("%.1f\n",soma);
    }
    
    
    
    
}
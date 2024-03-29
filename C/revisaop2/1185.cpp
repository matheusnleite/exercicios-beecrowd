#include <stdio.h>

int  main() {
    int cont=0;
    float M[12][12],soma;
    char op;

    scanf(" %c",&op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f",&M[i][j]);
            if (j+1<12-i)
            {
                soma+=M[i][j];
                cont++;
            }
            
        }
        
    }
   if (op == 'S'){
        printf("%.1f\n", soma);
    }else if (op == 'M'){
        printf("%.1f\n", soma/cont);
    
    }
    return 0;
}
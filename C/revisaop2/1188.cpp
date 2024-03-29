#include <stdio.h>

int  main() {
    int cont=0;
    double M[12][12],soma;
    char op;

    scanf(" %c",&op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf",&M[i][j]);
            if (j<i && i>=12-j)
            {
                soma+=M[i][j];
                cont++;
            }
            
        }
        
    }
   if (op == 'S'){
        printf("%.1lf\n", soma);
    }else if (op == 'M'){
        printf("%.1lf\n", soma/cont);
    
    }
    return 0;
}
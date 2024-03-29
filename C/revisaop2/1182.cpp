#include <stdio.h>

int main(){
    int n;
    float M[12][12],soma=0;
    char op;

    scanf("%d",&n);
    scanf(" %c",&op);


    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
            if(j==n){
                soma+=M[i][j];
            }
            
        }
        
    }
   

    if (op == 'S'){
        printf("%.1f\n", soma);
    }else if (op == 'M'){
        printf("%.1f\n", soma/12);
    
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n;

    while(scanf("%d",&n) != EOF){
        int M[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(j==i)M[i][j] = 2;
                else if(j==n-1-i)M[i][j]=3;
                else M[i][j] = 0;            
            }
        
        

        }
        //formar o quadrado de 1
        int inicio,fim;

        inicio = n/3;
        fim = n-inicio;

        for (int i = inicio; i < fim; i++)
        {
            for (int j = inicio; j < fim; j++)
            {
                M[i][j]=1;
            }
            
        }
        M[n/2][n/2] = 4;
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d",M[i][j]);
            }
            printf("\n");
            
        }
        printf("\n");
        
    }
}
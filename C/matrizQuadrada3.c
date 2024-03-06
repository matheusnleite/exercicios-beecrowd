#include <stdio.h>

int main(){
    int n,t,digitos;

    while (1)
    {
        scanf("%d",&n);
        if(n==-0)return 0;
        digitos=0;
        int M[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i==0 && j==0)
                {
                    M[i][j] = 1;
                }else if(j==0) M[i][j] = M[i-1][j]*2;
                else M[i][j] = 2*M[i][j-1];
                
                
            }
            
        }
        //atribuir a t o maior numero da matriz, que é o ultimo
        t = M[n-1][n-1];

        //descobrir quantos digitos esse numero tem;
        do
        {
            t= t/10;
            digitos++;
        } while (t>0);

        

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%*d",digitos,M[i][j]);
                if(j<n-1)printf(" ");
            }
            printf("\n");
            
        }
        printf("\n");
        
        
    }
    
}
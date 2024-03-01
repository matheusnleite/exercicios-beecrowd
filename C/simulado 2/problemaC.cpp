#include <stdio.h>

int main(){
    long int n,soma=0;

    scanf("%ld",&n);

    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&m[i][j]);
            
        }
        
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j==(n-1-i) ){
                if (m[i][j]%2 != 0)
                {
                    soma = soma + m[i][j];
                }
                
            }
           
            
        }
        
    }

    printf("%ld\n",soma);
    
    

}
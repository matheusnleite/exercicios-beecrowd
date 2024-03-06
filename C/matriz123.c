#include <stdio.h>

int main(){
    int n;

    while (scanf("%d",&n) != EOF)
    {
        int M[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n-1-i)
                {
                    M[i][j] = 2;
                }else if (i==j)
                {
                    M[i][j] = 1;
                }else M[i][j] = 3;
                
                
            }

           
    
            
        }
         for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("%d",M[i][j]);
                }
                printf("\n");
                
            }
        
    }
    
}
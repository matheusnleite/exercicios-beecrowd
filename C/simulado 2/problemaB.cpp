#include <stdio.h>

int main(){
    int l,c;
    //lendo a linha e a coluna
    scanf("%d %d",&l,&c);

    int m[l][c];

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&m[i][j]);
        }
        
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < l; j++)
        {
            printf("%d",m[j][i]);
            if (j != l-1)
            {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
    
}
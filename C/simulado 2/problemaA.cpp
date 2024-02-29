#include <stdio.h>

int main(){
    int g;

    scanf("%d",&g);

    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < g; j++)
        {
            if (j==i)
            {
                printf("1");
            }else printf("0");

            if (j != g-1)
            {
                printf(" ");
            }
            
            
            
        }
        
        printf("\n");
    }
    
}
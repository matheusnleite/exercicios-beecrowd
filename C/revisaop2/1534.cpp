#include <stdio.h>

#include <stdio.h>

int main(){
    int n;

    while (1)
    {
        scanf("%d",&n);
        

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i==j)
                    printf("1");
                else if(j==n-i+1)
                    printf("2");
                else 
                    printf("3");
                if(j==n-1)printf("\n");
            }
            
            
        }
    }
    
}
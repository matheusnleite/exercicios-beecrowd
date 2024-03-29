#include <stdio.h>

#include <stdio.h>

int main(){
    int n,x;

    while (1)
    {
        scanf("%d",&n);
        if(n==0)break;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                x=i;
                if (x==j)x=1;
                if(i<j)x=j-i+1;
                if(j<i)x=i-j+1;                
                printf("%3d",x);
                if(j<n)printf(" ");
                else printf("\n");
            }
            
            
        }
        printf("\n");
    }
    
}
#include <stdio.h>

int main(){
    int n,x,div,j;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        div=0;
        j=1;
        scanf("%d",&x);

        while (j<x)
        {
            if (x%j==0)
            {
                div=div+j;
            }
            j++;          
        }
    
       if (div==x)
       {
        printf("%d eh perfeito\n",x);
       }else printf("%d nao eh perfeito\n",x);
       
       
        
        
    }
    
}
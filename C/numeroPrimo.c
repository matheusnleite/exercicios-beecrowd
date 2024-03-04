#include <stdio.h>

int main(){
    int n,x,div=0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        div=0;
        scanf("%d",&x);

        for (int j = 1; j <= x; j++)
        {
            if (x%j==0)
            {
                div=div+j;

            }
            
        }    

        if (div==x+1)
        {
            printf("%d eh primo\n",x);
        }else printf("%d nao eh primo\n",x);
         
        
        
    }
    
}
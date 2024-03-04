#include <stdio.h>

int main(){
    int N[1000],t,x;
    
    scanf("%d",&t);
    x=0;

    for (int i = 0; i < 1000; i++)
    {
        if (x==t)
        {
            x=0;
        }
        
       N[i] = x;
       x++;
    }

    for (int i = 0; i < 1000; i++)
    {
       printf("N[%d] = %d\n",i,N[i]);
    }
    
    
    
    
}
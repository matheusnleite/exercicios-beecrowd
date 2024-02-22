#include <stdio.h>

int main(){
    int m,n,soma,temp;
    
    

    while (1)
    {
        scanf("%d %d",&m,&n);
        if (m<=0 || n<=0)
        {
            break;
        }
        if (m>n)
            {
                temp = m;
                m=n;
                n=temp;
            }

        soma =0;
        for (int i = m; i <= n; i++){
                printf("%d ",i);
                soma +=i;
            }printf("Sum=%d\n",soma);
            
        
        
        
        
        
        

        
    }
    
    
}
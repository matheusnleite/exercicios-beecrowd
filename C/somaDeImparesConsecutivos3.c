#include <stdio.h>

int main(){
    int n,x,y,soma=0,cont=0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        soma=0;
        cont=0;
       scanf("%d %d",&x,&y);

        for (int j = x; cont < y; j++)
        {
            if (j%2!=0) 
            {
                soma=soma+j;
                
                cont++;
            }
            
        }
        
        printf("%d\n",soma);
        
        
        
    }
    

}
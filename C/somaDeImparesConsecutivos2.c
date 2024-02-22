#include <stdio.h>

int main(){
    int n,x,y,soma=0,j,temp;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        soma=0;
        scanf("%d %d",&x,&y);
        if (x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        
        j=x +1;
        while (j<y)
        {   
            if (j%2 != 0)
            {
                soma = soma + j;
            }
            
            j++;
        }
        printf("%d\n",soma);
        
        
        
    }
    

}
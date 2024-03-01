#include <stdio.h>

int main(){
    int x,cont,soma;

    while (1)
    {
        soma=cont=0;
        scanf("%d",&x);
        if(x==0)break;

        for (int i = x; cont < 5; i++)
        {
            if (i%2==0)
            {
                soma=soma+i;
                cont++;
            }
            
        }
        printf("%d\n",soma);
        
    }
    

}
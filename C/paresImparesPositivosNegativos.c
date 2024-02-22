#include <stdio.h>

int main(){
    int n,pares=0,impares=0,posi=0,nega=0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d",&n);

        if (n%2 == 0)
        {
            pares++;
        }else impares++;

        if (n>0)
        {
            posi++;
        }else if(n<0) nega++;
        
        
    }
    
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",pares,impares,posi,nega);
}
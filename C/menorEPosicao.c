#include <stdio.h>

int main(){
    int n,menor,posi;

    scanf("%d",&n);

    int X[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&X[i]);
        if (i==0)
        {
            menor = X[i];
            posi = i+1;
        }else if (X[i]<menor)
        {
            menor = X[i];
            posi = i;
        }
        

        
    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",posi);
}
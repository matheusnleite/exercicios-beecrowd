#include <stdio.h>

int main(){
    
    int posi, maior=0,n;

    for (int i = 1; i <= 100; i++)
    {
        scanf("%d",&n);

        if (n>maior)
        {
            maior = n;
            posi = i;
        }
        
    }
    printf("%d\n%d\n",maior,posi);
    

}
#include <stdio.h>

int main(){
    int n,pares=0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d",&n);

        if (n%2 == 0)
        {
            pares++;
        }
        
    }
    printf("%d valores pares\n",pares);
    
}
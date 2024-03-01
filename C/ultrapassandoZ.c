#include <stdio.h>

int main(){
    int x,z,qtd=1;

    scanf("%d",&x);

    while (1)
    {
        scanf("%d",&z);
        if(z>x)break;
    }

for (int i = x; x < z; i++)
{
    x = x+i;
    qtd++;
}
printf("%d\n",qtd);
    
}
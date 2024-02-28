#include <stdio.h>

int main(){
    int n[10],x,y=0,qtd=0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&n[i]);
    }

    scanf("%d",&x);

    for (int i = 0; i < 10; i++)
    {
        if (n[i] == x)
        {
            qtd++;
            y=1;
        }
        
    }

    if (y ==1)
    {
        printf("%d\n",qtd);
        for (int i = 0; i < 10; i++)
        {
            if (n[i] == x)
            {
                printf("%d ",i);
            }
            
        }
        
    }
    
    if (y==0)
    {
        printf("Mia x\n");
    }
    
    
    
    
    
}
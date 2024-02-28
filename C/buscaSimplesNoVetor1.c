#include <stdio.h>

int main(){
    int n[10],x,y=0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&n[i]);
    }

    scanf("%d",&x);

    for (int i = 0; i < 10; i++)
    {
        if (n[i] == x)
        {
            printf("SIM\n");
            i=10;
            y=1;
        }else{
            y=0;
        }
        
    }
    if (y==0)
    {
        printf("NAO\n");
    }
    
    
    
    
    
}
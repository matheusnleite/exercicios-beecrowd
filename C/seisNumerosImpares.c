#include <stdio.h>

int main(){
    int x,impares=0;

    scanf("%d",&x);

    for (int i = x; i <= (x+12); i++)
    {
        if (i%2 != 0)
        {
            printf("%d\n",i);
            impares++;
        }
        if (impares == 6)
        {
            break;
        }
        
        
    }
    

}
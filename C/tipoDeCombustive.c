#include <stdio.h>

int main(){
    int op,al=0,gas=0,die=0;
    
    while (1)
    {
        scanf("%d",&op);

        if (op == 1)
        {
            al++;
        }else if (op == 2)
        {
            gas++;
        }else if (op == 3)
        {
            die++;
        }else if (op == 4)
        {
            break;
        }else continue;
        
        
        
        

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",die);
    

   return 0;

}
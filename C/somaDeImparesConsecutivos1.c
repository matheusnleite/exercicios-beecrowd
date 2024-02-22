#include <stdio.h>

int main(){
    int x,y,soma=0,temp;
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        
        temp = x;
        x = y;
        y = temp;
    }
    


    for (int i = x+1; i < y; i++)
    {
        if(i%2 != 0){
            soma = soma + i;
        }
    }
    printf("%d\n",soma);
    
    

}
#include <stdio.h>

int main(){
    int n,pum=0,i=1;
    scanf("%d",&n);

    while(1)
    {
        
        if (pum == n)
        {
            break;
        }else{
        
        printf("%d %d %d PUM\n",i,i+1,i+2);
        pum++;
        i=i+4;
        }
    }
    
}
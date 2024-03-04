#include <stdio.h>

int main(){
    int N[20],temp,j=19;

    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&N[i]);
    }

    for (int i = 0; i < 11; i++)
    {
        if(j<i)break;
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
        j--;
    }

    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    
    
    
}
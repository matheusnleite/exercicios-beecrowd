#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    for (size_t i = 1; i <= x; i++)
    {
        if (i%2 != 0)
        {
            printf("%d\n",i);
        }
        
    }
    
}
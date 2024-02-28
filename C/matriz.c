#include <stdio.h>

int main(){
    int m[3][3];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", m[0]+i);
    }

    for (int i = 0; i < 9; i++)
    {
         printf("%d\n", *m[0]+i);
    }
    
    
}
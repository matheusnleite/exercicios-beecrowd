#include <stdio.h>

int main(){
    float n;
    int p=0;


    for (int i = 0; i < 6; i++)
    {
        scanf("%f",&n);

        if (n>0.0)
        {
            p = p+1;
        }
        
    }

    printf("%d valores positivos\n",p);
    

}
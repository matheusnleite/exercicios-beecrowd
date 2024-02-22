#include <stdio.h>

int main(){
    float n[6],media = 0;
    int posi = 0;

    for (size_t i = 0; i < 6; i++)
    {
        scanf("%f",&n[i]);
        if (n[i]>=0)
        {
            posi++;
            media = media + n[i];
        }
        

    }

    media = media/posi;

    printf("%d valores positivos\n%.1f\n",posi,media);
    
}
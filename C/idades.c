#include <stdio.h>

int main(){
    int n,cont=0;
    float media=0;

    while (1)
    {
        scanf("%d",&n);
        if(n<0)break;
        else{
            media = media + n;
            cont++;
        }
    }
    media = media / cont;
    
    printf("%.2f\n",media);

}
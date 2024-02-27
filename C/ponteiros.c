#include <stdio.h>

int troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
    
}


int main(){
    int x,y;

    scanf("%d %d",&x,&y);
    if (x>y)
    {
        troca(&x,&y);
        printf("%d %d",x,y);
    }
    else printf("%d %d",x,y);
    
}
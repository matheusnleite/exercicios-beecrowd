#include <stdio.h>

int main(){
    int j=60;

    for (int i = 1; i <=37; i = i+3)
    {
        printf("I=%d J=%d\n",i,j);
        j -=5;
    }
    
}
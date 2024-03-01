#include <stdio.h>

int fatorial(int n){
    int fat=n;

    for (int i = 1; n-i!=1; i++)
    {
        fat = fat * (n-i);
    }
    printf("%d\n",fat);
    
}

int main(){
    int n;

    scanf("%d",&n);

    fatorial(n);
}
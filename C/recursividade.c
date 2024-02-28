#include <stdio.h>

int fatorial(int n){
    //Base: N = 0, N!=1
    if (n == 0)
    {
        return 1;
    }
    //Passo: N! = N*(N=1)!
    return n*fatorial(n-1);
    
}

int main(){
    int n;
    scanf("%d",&n);

    int fat = fatorial(n);
    printf("%d\n",fat);
}
#include <stdio.h>

int main(){
    long int A,B;

    while (scanf("%ld %ld",&A,&B) != EOF)
    {
        printf("%ld\n",A^B);
    }
    
}
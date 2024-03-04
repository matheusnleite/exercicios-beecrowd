#include <stdio.h>

int main(){
    double N[100],x;

    scanf("%lf",&x);

    N[0] = x;

    for (int i = 1; i < 100; i++)
    {
        N[i]= N[i-1]/2.0;
    }
    
    for (int i = 0; i < 100; i++)
    {
       printf("N[%d] = %.4lf\n",i,N[i]);
    }
    
     
    
    
}
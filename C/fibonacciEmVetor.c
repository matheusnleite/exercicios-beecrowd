#include <stdio.h>



int main(){
    int t;
    unsigned long long int x,a=0,b=1,c=0;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        scanf("%lld",&x);

        if(x==0)printf("Fib(0) = 0\n");
        a=c=0;
        b=1;

        for (int i = 0; i < x; i++)
        {
            a=b;
            b=c;
            c=a+b;

            if(i==x||i==x-1)printf("Fib(%d) = %lld\n",i+1,c);
        }
        

        
    }
    
}
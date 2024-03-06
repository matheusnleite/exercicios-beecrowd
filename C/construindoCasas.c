#include <stdio.h>
#include <math.h>
int main(){
    int a,b,area;
    double c,lado;

    while (1)
    {   
        scanf("%d",&a);
        if(a==0)return 0;
        scanf("%d %lf",&b,&c);
        

        area = a*b;
        lado = area/(c/100);
        printf("%d\n",(int)sqrt(lado));
    }
    


}
#include <stdio.h>

int main(){
    float X, Y, T;
    int Q, x1,y1;

    scanf("%f %f",&X,&Y);
    x1 = X*100;
    y1=Y*100;
    Q = x1/y1;
    T = x1%y1;
    T=T/100;

    printf("%d %.2f\n",Q,T);

}
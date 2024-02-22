#include <stdio.h>
int main(){
    float A, B, T;
    int Q;
    scanf("%f %f",&A,&B);
    Q = A/B;
    T = A-(Q*B);
    printf("%d %.2f\n",Q,T);
    return 0;
}
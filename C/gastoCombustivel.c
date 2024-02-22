#include <stdio.h>

int main(){

        int horas,vm;
        float D,L;

        scanf("%d%d",&horas,&vm);

        D = vm*horas;

        L = D/12;

        printf("%.3f\n",L);


}

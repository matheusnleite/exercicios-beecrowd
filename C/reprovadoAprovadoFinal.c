#include <stdio.h>

int main(){
        float n1,n2,nfinal;

        scanf("%f%f",&n1,&n2);

        nfinal = ((n1*2) + (n2*3))/5 ;
        if (nfinal>=7){
            printf("Aprovado\n");
        }else if (nfinal<3){
            printf("Reprovado\n");
        }else{
            printf("Final\n");
        }


}
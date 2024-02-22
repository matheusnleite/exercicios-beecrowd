#include <stdio.h>

int main(){

    int dI,dF,hI,hF,mI,mF,sI,sF,totD,totH,totM,totS;

    scanf("Dia %d",&dI);
    scanf("%d : %d : %d\n",&hI,&mI,&sI);
    scanf("Dia %d",&dF);
    scanf("%d : %d : %d",&hF,&mF,&sF);

    totD = dF-dI;
    totH = hF-hI;
    totM = mF-mI;
    totS = sF-sI;

    if (totS<0)
    {
        totS+=60;
        totM-=1;
    }
    
    if(totM<0){
        totM+=60;
        totH-=1;
    }

    if(totH<0){
        totH+=24;
        totD-=1;
    }
    
    

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",totD,totH,totM,totS);
    

}
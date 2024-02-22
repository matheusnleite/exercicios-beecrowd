#include <stdio.h>

int main(){
    float x, imp;

    scanf("%f",&x);

    if(0.00<=x && x<=2000.00){
        printf("Isento\n");
    }else if (2000.01<=x && x<=3000.00)
    {
        imp = (x - 2000.00)*0.08;
        printf("R$ %.2f\n",imp);
    }else if (3000.01<=x && x<=4500.00)
    {
        imp = (x - 3000.00)*0.18+1000.00*0.08;
        printf("R$ %.2f\n",imp);
    }else if (4500.01<=x)
    {
        imp = (x - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08;
        printf("R$ %.2f\n",imp);
    }
    
    
    
}
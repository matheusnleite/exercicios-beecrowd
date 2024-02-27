#include <stdio.h>

int media(){
    float a,b;
    scanf("%f %f",&a,&b);
    float media = (a+b)/2.0;
     printf("%.1f",media);
        
}

int main(){
    printf("Escolha uma opção: \n");
    printf("1-Media \n");
    int op;
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        media();
       
    }
    
}
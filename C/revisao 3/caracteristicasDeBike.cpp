#include <stdio.h>

int main(){
    typedef struct{
        char cor[51];
        char marca[51];
        int marcha;
        float preco;
    }Bike;

    int n,menorMarcha, maiorMarcha;

    scanf(" %d %d %d",&n,&menorMarcha,&maiorMarcha); 

    Bike bike[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]s",bike[i].cor);
        scanf(" %[^\n]s",bike[i].marca);
        scanf(" %d",&bike[i].marcha);
        scanf(" %f",&bike[i].preco);
    }

    for (int i = 0; i < n; i++)
    {
        if (bike[i].marcha>=menorMarcha && bike[i].marcha<=maiorMarcha)
        {
            printf("%s\n",bike[i].cor);
            printf("%s\n",bike[i].marca);
            printf("%d\n",bike[i].marcha);
            printf("%.2f\n",bike[i].preco);
        }
        
    }
    
    
}
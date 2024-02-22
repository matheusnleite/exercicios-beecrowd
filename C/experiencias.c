#include <stdio.h>

int main(){
    int n;
    float qtd,totqtd=0,totc=0,totr=0,tots=0;
    char tipo;
    float percc,percr,percs;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f %c",&qtd,&tipo);
        totqtd += qtd;

        if (tipo == 'C')
        {
            totc += qtd;
        }else if (tipo == 'R')
        {
            totr += qtd;
        }if (tipo == 'S')
        {
            tots += qtd;
        }
        
        
    }
    percc = (totc/totqtd)*100;
    percr = (totr/totqtd)*100;
    percs = (tots/totqtd)*100;

    printf("Total: %.0f cobaias\n",totqtd);
    printf("Total de coelhos: %.0f\n",totc);
    printf("Total de ratos: %.0f\n",totr);
    printf("Total de sapos: %.0f\n",tots);
    printf("Percentual de coelhos: %.2f %%\n",percc);
    printf("Percentual de ratos: %.2f %%\n",percr);
    printf("Percentual de sapos: %.2f %%\n",percs);
    
}
#include <stdio.h>

int main(){

    int t,PA,PB,anos=0;
    double G1,G2;

    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        anos=0;
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        for (int i = PA; i <= PB; i=i+(i*(G1/100)))
        {
            anos++;
            PB = PB + (PB*(G2/100));
            if (anos>100)
            {
                break;
            }
            
            
        }
        if (anos>100)
            {
                printf("Mais de 1 seculo.\n");
            }else printf("%d anos.\n",anos);
        
    }
    
}
#include <stdio.h>

int main(){
    int n,l,maior=0;

    while (scanf("%d",&n) != EOF)
    {
        maior=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&l);
            if(l>maior)maior = l;
        }
        if(maior<10)printf("1\n");
        else if(maior>=10 && maior<20)printf("2\n");
        else if(maior>=20)printf("3\n");
    }
}
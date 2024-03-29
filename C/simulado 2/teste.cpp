#include <stdio.h>
#include <stdlib.h>

int main(){
    char m[40];
    int cp,cf,lp,lf,linha = 1,j=0;

    while(j<5)
    {
        scanf("%[^\n]s",&m);
        getchar();
        for (int i = 0; m[i] != '\0' ; i++)
        {
            if (m[i] == 'f')
            {
                lf = linha;
                cf = i/2;
            }
             if (m[i] == 'p')
            {
                lp = linha;
                cp = i/2;
            }
            
        }
        j++;
        linha++;
        
    }
    printf("%d\n", abs(lp-lf)+abs(cp-cf));
    

}
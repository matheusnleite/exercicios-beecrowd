#include <stdio.h>
#include <stdlib.h>

int main(){
    char S[40];
    int contF=1,contP=1,cP=1,cF=1,f=1,p=1,dist,lF,lP;
    
    while(scanf("%[^\n]s", S) != EOF)
    {
        getchar();
        for (int i = 0; S[i] != '\0'; i++)
        {
            
            if (S[i] == 'f')
            {
                cF = f;
                lF = contF;
                //printf("Fantasma L = %d C = %d\n",lF,cF);
                
                
            }else if(S[i] != ' ') f++;
            if (S[i] == 'p')
            {
                cP = p;
                lP=contP;
                 //printf("Pac-man L = %d C = %d\n",lP,cP);
            }else if(S[i] != ' ') p++;
        }
        p=1;
        f=1;
        contP++;
        contF++;      
    }
    dist = abs(lF-lP) + abs(cF-cP);
    printf("%d\n",dist);
    
    

}
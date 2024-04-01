#include <stdio.h>

int main(){
    int N,menor,posi=0;

    scanf("%d",&N);

    int vetor[N];

    for (int x = 0; x < N; x++)
    {
        scanf("%d",&vetor[x]);
       
    }

    menor = vetor[0];

    for (int j = 0; j < N; j++)
        {
            if (vetor[j]<menor)
            {
                menor = vetor[j];
                posi = j;
            }
            
        }
        printf("%d\n",posi+1);
        
     return 0;
    
}
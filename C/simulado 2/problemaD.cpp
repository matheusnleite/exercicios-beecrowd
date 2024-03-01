#include <stdio.h>
#include <string.h>
int main(){
    char N[300];
    int qtd=0;

    scanf("%[^\n]s",&N);

    for (int i = 0; i < strlen(N); i++)
    {
        
        if (N[i] == '0' ||N[i] == '1' ||N[i] == '2' ||N[i] == '3' ||N[i] == '4' ||N[i] == '5' ||N[i] == '6' ||N[i] == '7' ||N[i] == '8' ||N[i] == '9')
        {
           qtd++;
        }
        
    }
    printf("%d\n",qtd);
}
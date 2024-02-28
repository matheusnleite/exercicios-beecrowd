#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    char c;
    int qtd=0;

    scanf("%s %c",&nome,&c);

    for (int i = 0; i<strlen(nome); i++)
    {
        if (nome[i] == c)
        {
            qtd++;
        }
        
    }
    printf("%d",qtd);
    
}
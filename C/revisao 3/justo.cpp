#include <stdio.h>
#include <string.h>

int main(){
    char n;
    char string[101];

    while (scanf("%c %s",&n,string) != EOF)
    {
        int tamanho = strlen(string);


        for (int i = 0; i < tamanho; i++)
        {
            if (string[i] != n)
            {
                printf("%c\n",string[i]);
            }
            
        }
        
        
    }
    
}
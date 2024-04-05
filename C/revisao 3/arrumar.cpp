#include <stdio.h>
#include <string.h>
int main(){
    char str1[101],str2[101];   //duas strings, uma para ler e a outra para inverter
    int j=0;

    scanf(" %[^\n]s",str1);


    for (int i = strlen(str1)-1; i >= 0; i--) //o i é igual ao tamanho  da string -1, pois o vetor começa a contagem no 0
    {
        str2[j]=str1[i];        //atribuímos a ultima posicao da string 1, a primeira possição da string 2.
        j++;                    // o J server de contador para a string 2.
    }

    

    for (int i = 0; str1[i] != '\0'; i++) // repete ate a ultima posicao da string 1 ser o final de string
    {
        if(str1[i] == str2[i]) // se  os caracteres na mesma posição das duas strings forem iguais, vai pra proxima iteração
            continue;
        else{                   //se forem diferentes o programa encerra
            printf("nao\n");
            return 0;
        }
    }

    printf("sim\n");
    

    
    

}
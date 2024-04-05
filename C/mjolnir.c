#include <stdio.h>
#include <string.h>

int main(){
    int c,n;
    char nome[10];
    scanf("%d",&c);

    for (int i = 0; i < c; i++)
    {
       scanf("%s",nome);
       scanf("%d",&n);

       if (strcmp(nome,"Thor")==0){
            printf("Y\n");
       }else printf("N\n");
       
    }
       
}

    
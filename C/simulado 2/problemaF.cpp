#include <stdio.h>
#include <string.h>

void removespaces(char*str){
    int j=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++]=str[i];
        }
        
    }
    str[j]='\0';
}

int main(){
    int t;
    char J[32],P[32];

    scanf("%d",&t);
    getchar();


    for (int i = 1; i <= t; i++)
    {
        scanf("%[^\n]%*c",P);
        scanf("%[^\n]%*c",J);

        if (strcmp(P,J) == 0)printf("Caso %d: Yes\n",i);
        else{
            removespaces(P);
        if(strcmp(P,J) == 0)printf("Caso %d: Output Format Error\n",i);
        else printf("Caso %d: Wrong Answer\n",i);
        } 
    }

    
}
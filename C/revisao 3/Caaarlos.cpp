#include <stdio.h>


int main(){
    int n;

    scanf("%d",&n);

    char str[n];

    for (int i = 0; i < n; i++)
    {
        str[i]='a';

    }

    str[n]='\0';

    printf("C%srlos, que felicidade!\n",str);
    
}
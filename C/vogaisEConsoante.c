#include <stdio.h>
#include <string.h>



int main(){

   char s[50], c[50], v[50];
   int n1=0,n2=0;

   scanf("%s",&s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u')
        {
            v[n1] = s[i];
            n1++;
        }else{
            c[n2] = s[i];
            n2++;
        }
        v[n1] = c[n2] = '\0';
        
    }
    printf("Vogais: %s\nConsoantes: %s\n",v,c);
    

}
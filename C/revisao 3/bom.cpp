#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    
    char l, f[1000];
    int cont=0;

    scanf(" %c", &l);
    scanf(" %[^\n]s", f);

    for (int i = 0; i < strlen(f); i++)
    {
        f[i] = tolower(f[i]);
    }

    l = tolower(l);
    
    for (int i = 0; i < strlen(f); i++)
    {
       if (f[i] == l)
       {
         cont++;
       }
       
        
    }

    printf("%d\n",cont);
    
}
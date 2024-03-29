#include <stdio.h>
#include <string.h>

int main(){
    char n[35];
    strcpy(n,"LIFE IS NOT A PROBLEM TO BE SOLVED");
    int x;
    scanf("%d",&x);

   for (int i = 0; i < x; i++)
   {
    if (i==x-1)
    {
        printf("%c\n",n[i]);
    }else printf("%c",n[i]);
   }
   

    
    
}
#include <stdio.h>
#include <string.h>
int main(){
    char c[10];
    int r=0,cont=0;

    while (cont < 3)
    {
        scanf("  %[^\n]s", c);
        if (strcmp(c, "caw caw")==0)
        {
            cont++;
            printf("%d\n",r);
            r=0;
        }else if (strcmp(c, "--*")==0)
        {
           r += 1;
        }else if (strcmp(c, "-*-")==0)
        {
           r += 2;
        }else if (strcmp(c, "*--")==0)
        {
           r += 4;
        }else if (strcmp(c, "**-")==0)
        {
           r += 6;
        }else if (strcmp(c, "*-*")==0)
        {
           r += 5;
        }else if (strcmp(c, "---")==0)
        {
           r += 0;
        }else if (strcmp(c, "-**")==0)
        {
           r += 3;
        }else if (strcmp(c, "***")==0)
        {
           r += 7;
        }
        
        
    }
    
}
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char str1[501],str2[501];
    int j=0;

    scanf(" %[^\n]s",str1);

    for (int i = 0; str1[i]!='\n'; i++)
    {
        str1[i] = tolower(str1[i]);
    }
    

    for (int i = strlen(str1)-1; i >=0 ; i--)
    {
        str2[j] = str1[i]; 
        j++;
    }

   
    


}
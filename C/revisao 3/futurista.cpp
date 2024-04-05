#include <stdio.h>

int main(){
    char str[1000];
    int n;

    scanf("%d",&n);
    scanf(" %[^\n]s",str);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n",str);
        
    }
    
}
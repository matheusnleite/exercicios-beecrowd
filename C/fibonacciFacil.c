#include <stdio.h>
int main(){
    int n,a=0,b=1,c=0;

    scanf("%d",&n);
    
    if(n==0||n==1){
        printf("%d",a);
        return 0;
        }
    printf("%d",a);
    for (int i = 1; i < n; i++)
    {
        if (i!=n)
        {
            printf(" ");
        }
        a=b;
        b=c;
        c=a+b;
        printf("%d",c);
        
        
        
   }
   printf("\n");
   
}
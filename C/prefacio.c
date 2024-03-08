#include <stdio.h>
#include <math.h>
int main(){
    int a,b,q,r;

    scanf("%d %d",&a,&b);

    

   if (a>0)
   {
    q = a/b;
    r = a%b;
    printf("%d %d\n",q,r);
   }
   else if (a<0)
   {
    if (b>0)
    {
        if (a%b == 0)
        {
            printf("%d %d\n",a/b,0);
        }
        else {
            q=a/b-1;
            r = b + (a%b);
            printf("%d %d\n",q,r);
        }
        
    }
    else if (b<0)
    {
        if (a % b == 0)
                printf("%d %d\n", a / b, 0);
            else {
                q = a / b + 1;
                r = b - (a % b);
                printf("%d %d\n", q, abs(r));
            }
    }
    
    
   }
   
   
   
   
}
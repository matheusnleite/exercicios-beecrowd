#include <stdio.h>

int main(){
    int n,x,in=0,out=0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);

        if (10<=x && x<=20)
        {
            in++;
        }else out ++;
        

    }

    printf("%d in\n%d out\n",in,out);
    
}
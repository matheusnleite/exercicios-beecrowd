#include <stdio.h>

int main(){
    int a,b,c;
    int x,y,z;
    int temp;

    scanf("%d%d%d",&a,&b,&c);
        //x=7, y=21, z=-14
    x=a;
    y=b;
    z=c;

    if (x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    if (x>z)
    {
        temp=x;
        x=z;
        z=temp;
    }

if (y>z)
{
    temp=y;
    y=z;
    z=temp;
}

printf("%d\n%d\n%d\n\n",x,y,z);
printf("%d\n%d\n%d\n",a,b,c);
    
    
}


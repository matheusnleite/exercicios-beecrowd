#include <stdio.h>

int main (){
    int a,b,temp;

    scanf("%d%d",&a,&b);
    

    if(a>b){
        temp = a;
        a=b;
        b=temp;
    }
    int i = a;

    while(i<=b){
        printf("%d ",i);
        i++;
    }
    
    

}
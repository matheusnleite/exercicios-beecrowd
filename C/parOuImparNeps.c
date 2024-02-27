#include <stdio.h>

int pi(int x,int y){
    if((x+y)%2 == 0) printf("Bino\n");
    else if((x+y)%2 != 0) printf("Cino\n");
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    pi(x,y);
}
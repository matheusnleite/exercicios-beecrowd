#include <stdio.h>

int main(){
    int j = 7;

    for (int i = 1; i <= 9; i+=2)
    {
        if (i == 1)
        {
            for (int t = 0; t < 3; t++)
            {
                printf("I=%d J=%d\n",i,j);
                j--;
            }
            
        }else if(i==3){
            j=9;
            for (int t = 0; t < 3; t++)
            {
                printf("I=%d J=%d\n",i,j);
                j--;
            }
        }else if(i == 5){
            j=11;
            for (int t = 0; t < 3; t++)
            {
                printf("I=%d J=%d\n",i,j);
                j--;
            }
        }else if(i == 7){
            j=13;
            for (int t = 0; t < 3; t++)
            {
                printf("I=%d J=%d\n",i,j);
                j--;
            }
        }else if(i == 9){
            j=15;
            for (int t = 0; t < 3; t++)
            {
                printf("I=%d J=%d\n",i,j);
                j--;
            }
        }
    }
    
}
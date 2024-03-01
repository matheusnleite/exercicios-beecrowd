#include <stdio.h>
 
 
int main() {
    float S=1,x=2;
    for (int i = 3; i <= 39; i+=2)
    {
        
        S=S+(i/x);
        x = 2*x;
    }
    
    
    printf("%.2f\n",S);
    return 0;
}
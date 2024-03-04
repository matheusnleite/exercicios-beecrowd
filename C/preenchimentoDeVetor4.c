#include <stdio.h>

int main(){
    int par[5],impar[5],x,pa=0,im=0;

    for (int c = 0; c < 15; c++)
    {
        scanf("%d",&x);

        if (x%2==0)
        {
            if (pa==5)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("par[%d] = %d\n",i,par[i]);
                }
                pa=0;
                par[pa]=x;
                pa++;
                
            }else{
                par[pa]=x;
                pa++;
            } 
            
        }else{
            if (im==5)
            {
                for (int i = 0; i < 5; i++)
                {
                    printf("impar[%d] = %d\n",i,impar[i]);
                }
                im=0;
                impar[im]=x;
                im++;
                
            }else{
                impar[im]=x;
                im++;
            } 
        }
        
    }

    for (int i = 0; i < im; i++)
    {
         printf("impar[%d] = %d\n",i,impar[i]);
    }

    for (int i = 0; i < pa; i++)
    {
         printf("par[%d] = %d\n",i,par[i]);
    }
    
    
    
}
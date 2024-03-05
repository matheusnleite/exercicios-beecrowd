    #include <stdio.h>
    int main(){

        double M[12][12],soma=0,media=0;
        int cont=0;
        char c;

        scanf("%c",&c);

        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                scanf("%lf",&M[i][j]);
                if(j>i && j+1<12-i){
                    soma = soma+M[i][j];
                    cont++;
                }
            }
            
        }

        if (c=='S')
        {
            printf("%.1lf\n",soma);
        }else if (c=='M')
        {
            media = soma/cont;
            printf("%.1lf\n",media);    }
        
        
        
    }
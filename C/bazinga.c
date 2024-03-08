#include <stdio.h>
#include <string.h>

int main(){

    int t;
    char p1[15],p2[15];
  

    scanf("%d",&t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%s %s",&p1,&p2);

        if (strcmp(p1,p2) == 0) //empate
        {
            printf("Caso #%d: De novo!\n",i);
        }else if (strcmp(p1,"tesoura") == 0) //Sheldon escolher TESOURA
        {
            if (strcmp(p2,"papel") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }else if (strcmp(p2,"Spock") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"lagarto") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }else if (strcmp(p2,"pedra") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            
            
        }else if (strcmp(p1,"papel") == 0) //Sheldon escolher PAPEL
        {
            if (strcmp(p2,"tesoura") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"Spock") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }else if (strcmp(p2,"lagarto") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"pedra") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
        }else if (strcmp(p1,"pedra") == 0) //Sheldon escolher PEDRA
        {
            if (strcmp(p2,"papel") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"Spock") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"lagarto") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }else if (strcmp(p2,"tesoura") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
            
            
        }else if (strcmp(p1,"lagarto") == 0) //Sheldon escolher LAGARTO
        {
            if (strcmp(p2,"papel") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }else if (strcmp(p2,"Spock") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }else if (strcmp(p2,"tesoura") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"pedra") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }
            
            
        }else if (strcmp(p1,"Spock") == 0) //Sheldon escolher SPOCK
        {
            if (strcmp(p2,"papel") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"tesoura") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }else if (strcmp(p2,"lagarto") == 0)
            {
                printf("Caso #%d: Raj trapaceou!\n",i);
            }else if (strcmp(p2,"pedra") == 0)
            {
                printf("Caso #%d: Bazinga!\n",i);
            }
            
            
        }
        
        
    }
    
}
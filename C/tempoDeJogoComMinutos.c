#include <stdio.h>

int main (){
    int h1,h2,m1,m2, tempo;

    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    tempo = ((h2*60)+m2)-((h1*60)+m1) ;

    if(tempo<=0){
        tempo = tempo + 24*60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo/60,tempo%60);
}
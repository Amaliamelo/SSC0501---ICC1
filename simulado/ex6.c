#include<stdio.h>

int main(){

    struct ponto{
        int x;
        int y;
    };

    struct ponto p1, p2;
    scanf("%d %d", &p1.x, &p1.y);

    scanf("%d %d", &p2.x, &p2.y);

    int a, b,c;

    //y=ax+b

    c=(p1.y-p2.y)/(p1.x-p2.x);
    a=c;
    b=-c*p1.x+p1.y;

    char sinal;

    if(b<0){
        b=b*-1;
        sinal='-';
    }else{
        sinal='+';
    }

    printf("\n Equação da reta: y = %dx %c %d\n", a, sinal, b);

    return 0;
}

#include<stdio.h>

int main(){
    int i = 4, j = 7, x = 10;
    int *p, *q;
    p = &i;
    q = &j;

    if(p == &i)
        printf("\nA");
    else
        printf("\nB");


    printf("\n%d", *q - *p);
    printf("\n%d", **&p);
    p = &x;
    printf("\nresultado: %d %d ", *p, i);

    /*
    a) A
    b) 3
    c) 4
    d) 10 3


    */
}

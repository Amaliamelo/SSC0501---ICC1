//Amália Vitória de Melo - 13692417
#include <stdio.h>
#include <stdlib.h>

int contaDigitos(int d,int n){
    int novo = 0, cont=0;
    int Digit;
    while(n>0) {
        Digit = n%10;
        n=n/10;
        if(Digit==d){
            cont++;
        }
    }
    //printf("\n cont:%d", cont);

    return cont;
}

int main(){
    int d,n, a, b, tam=0, aux=0, aux2=0, p=0;

    //scanf("%d %d", &n, &d);

    scanf("%d %d", &a ,&b);
    int A_aux=a;

    while(a>0) {
        int Digit = a%10;
        //printf("\n digit:%d", Digit);
        aux=contaDigitos(Digit, b);
        aux2=contaDigitos(Digit, A_aux);
        //printf("\n aux:%d", aux);
        if(aux==aux2){
            p++;
        }
        //printf("\n a:%d", a);
        a=a/10;
        tam++;

    }

    if(p==tam){
        printf("\n Eh permutacao");
    }
    else{
         printf("\n Nao eh permutacao");
    }
    //printf("\np:%d", p);
    //contaDigitos(d,&n);



}

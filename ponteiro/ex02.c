#include<stdio.h>

int MDC(int *numerador, int *denominador){
	int n = *numerador;
	int d = *denominador;
	int resul1=0,resul2=0,aux=0,i, menor=0;
	if(n<=d){
            menor=n;
	}
	else{
		menor=d;
	}
	for(int i=1;i<=menor;i++){
		resul1=n%i;
		resul2=d%i;
		if(resul1==0&&resul2==0){
			aux=i;
		}
	}
	return aux;
}

void simplifica_fracao(int *numerador, int *denominador){
	int n=*numerador, d=*denominador, divisor;

	divisor=MDC(&n,&d);
	//printf("%d",MDC(&n,&d));
	*numerador=n/divisor;
	*denominador=d/divisor;



}

int main(){
	int numerador, denominador;

	do{
		scanf("%d %d", &numerador,&denominador);
		simplifica_fracao(&numerador,&denominador);
		printf("%d/%d\n", numerador, denominador);

	}while(!feof(stdin));
}

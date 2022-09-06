#include<stdio.h>

void ordenaVetor(int *vetor, int n){
    /*int maior=*v1;

    if(maior<*v1){
        maior=*v1;
    }
    else{
        maior=v2;
    }
    //return maior;*/
    int aux=0;
	for(int j=n-1; j>0; j--){
		for(int i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

int main(){

    /*int valor1, valor2, maior;

    scanf("%d %d", &valor1,&valor2);

    maior=maiorValor(valor1,valor2);

    printf("\nmaior: %d", maior);*/
   
    int n;

    scanf("%d", &n);
    printf("%d", n);
    int vetor[n];

    for(int i=0; i<n; i++){
		scanf("%d", &vetor[i]);
    }
    ordenaVetor(vetor, n);
    for(int i=0; i<n; i++){
		printf("\n%d ", vetor[i]);
    }

}
//Amália Vitória de Melo - 13692417
#include<stdio.h>
#include <stdlib.h>

#define tamanho 1000

void vetorIntercalado(int *A,int *B,int m,int n){
	//printf("\n%d %d\n", A[0], B[0]);

	int tam=m+n;
	int vetor[tam];
	//printf("tam=%d\n", tam);
	for(int i=0;i<n;i++){
		vetor[i]=A[i];
	}
	int aux=0;
	for(int i=n;i<tam;i++){
		vetor[i]=B[aux];
		aux++;
	}
	 int k, j;

	aux=0;



	for(int j=tam-1; j>=1; j--){
		for(int i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=aux;
            }
        }
    }

	for(int i=0;i<tam;i++){
		printf("%d ", vetor[i]);
	}

}


int main(){
	int k=2,n,m;

	for(int i=0;i<k;i++){
        //scanf("%d", &n);
        n=tamanho;

		int A[n];

		for(int i=0;i<n;i++){
			scanf("%d", &A[i]);
		}

        //scanf("%d", &m);
        m=tamanho;

		int B[m];

		for(int i=0;i<m;i++){
			scanf("%d", &B[i]);
		}

		vetorIntercalado(A,B,m,n);
    }


}

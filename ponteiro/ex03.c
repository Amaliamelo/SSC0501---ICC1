#include <stdio.h>

#define N 4

void maiorElemento(int *v, int n, int *maior){
    *maior=*v;
    //printf("*v:%d\n", *maior);

    for(int i=0;i<n;i++){
		if(*maior<=*(v+i)){
            *maior=v[i];
            //maior-endereço *maior-conteudo
		}
	}
}

void lerVetor(int *v, int n){

	for(int i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
}

int main(){
    int n;
    int maior=0;

    scanf("%d", &n);

	 int v[n];
    lerVetor(v, n);

    maiorElemento(v, n, &maior);
    printf("%d\n", maior);

    return 0;
}

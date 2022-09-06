#include<stdio.h>

int ordenar(int *valores){

    int aux;

	for(int i=1;i<3;i++){

		if(valores[i]<valores[i-1]){
            aux= valores[i-1];
			valores[i-1]=valores[i];
            valores[i]=aux;

		}

	}
}

int main(){
	int valores[3];

	for(int i=0;i<3;i++){
		scanf("%d", &valores[i]);
	}

	ordenar(valores);

    for(int i=0;i<3;i++){
		printf("%d\n", valores[i]);
	}
}

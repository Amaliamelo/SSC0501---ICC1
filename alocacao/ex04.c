#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

	int *n = malloc(1*sizeof(int));
	int *m = malloc(1*sizeof(int));

	scanf("%d %d", n, m);
	
	int aux = *n-1;
	int **pares;
		pares = (int**)malloc(aux*sizeof(int*));

		for(int i=0;i<aux;i++){
			 pares[i]=(int*)malloc(2*sizeof(int));
		}

	for(int i=0;i<aux;i++){
		for(int j=0;j<2;j++){
			scanf("%d", &pares[i][j]);
		}
	} 
	
	//printf("\n N: %d M:%d\n", *n, *m);
	
	/*for(int i=0;i<aux;i++){
		for(int j=0;j<2;j++){
			printf("%d ", pares[i][j]);
		}
		printf("\n");
	} */

	int p1,p2; 

	int **matriz;
		matriz = (int**)malloc(*n*sizeof(int*));

	for(int i=0;i<*n;i++){
			matriz[i]=(int*)malloc(*m*sizeof(int));
	}
	int temp;
	for(int i=0;i<*n;i++){
		for(int j=0;j<*m;j++){
			if(i==0){
				matriz[i][j]=j+1;
			}
			else{
				//matriz[i][j]=matriz[i-1][j];
				
				p1=pares[i-1][0]-1;
				p2=pares[i-1][1]-1;
				
				if(p1>p2){
					temp=p2;
					p2=p1;
					p1=temp;
				}

				if(j>=p1 && j<=p2){
					aux = p2-(j-p1);
					matriz[i][j]=matriz[i-1][aux];
				}
				else{
					matriz[i][j]=matriz[i-1][j];
				}
				
			}
		}
	} 
	/*printf("\n");
	for(int i=0;i<*n;i++){
		for(int j=0;j<*m;j++){
			printf("%d ", matriz[i][j]);

		}
		printf("\n");
	}*/ 
	
	
	//printf("\n");
	int *soma;
		soma = (int*)malloc(*m*sizeof(int*));
	
	for(int i=0;i<*n;i++){
		for(int j=0;j<*m;j++){
			soma[j]+= matriz[i][j];
			//printf("%d ", soma[j]);
		}
	}
	/*printf("\n");
	for(int j=0;j<*m;j++){
		printf("%d ", soma[j]);
	}*/
	
	int maior=soma[0], menor=soma[0];
	for(int j=0;j<*m;j++){
		if(maior<=soma[j]){
			maior=soma[j];
		}
		else{
			if(menor>=soma[j]){
				menor=soma[j];
			}
		}
	}

	printf("\n%d %d", menor, maior);
}
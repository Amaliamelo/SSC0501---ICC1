//Amália Vitória de Melo - 13692417
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int n,m; //endere�o da matriz
	scanf("%d %d", &n,&m);

    //criando matriz

	int **matriz;
	matriz = (int**)malloc(n*sizeof(int*));

	for(int i=0;i<n;i++){
		 matriz[i]=(int*)malloc(m*sizeof(int));
	}

	//inserindo numeros aleatorios
	srand(time(NULL));

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			matriz[i][j]= rand() % 1000;
			//printf("%d ", matriz[i][j]);
		}
		//printf("\n");
	}

	//procurando maior e menor
    int maior=matriz[0][0], menor=matriz[0][0], x_maior,y_maior,x_menor,y_menor;

    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matriz[i][j]>maior){
                maior=matriz[i][j];
                x_maior=i;
                y_maior=j;
			}
			else{
               if(matriz[i][j]<menor){
                    menor=matriz[i][j];
                    x_menor=i;
                    y_menor=j;
                }
			}
		}
	}

	printf("\n Maior: %d[%d][%d]", maior, x_maior,y_maior);
    printf("\n Menor: %d[%d][%d]", menor, x_menor,y_menor);

}

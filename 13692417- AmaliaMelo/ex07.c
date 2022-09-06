//Amália Vitória de Melo - 13692417
#include <stdio.h>
#include <stdlib.h>

int **ler_matriz(int linhas, int colunas){

	int **matriz;
	matriz = (int**)malloc(linhas*sizeof(int*));

	for(int i=0;i<linhas;i++){
		 matriz[i]=(int*)malloc(colunas*sizeof(int));
	}

	for(int i=0;i<linhas;i++){
		for(int j=0;j<colunas;j++){
			scanf("%d", &matriz[i][j]);
		}
	}

	return matriz;
}
void imprimir_matriz(int **mat, int linhas, int colunas){

	for(int i=0;i<linhas;i++){
		for(int j=0;j<colunas;j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}
void subtrair_matrizes(int **mat1, int **mat2, int linhas, int colunas){

    int **subtracao;
	subtracao = (int**)malloc(linhas*sizeof(int*));

	for(int i=0;i<linhas;i++){
		 subtracao[i]=(int*)malloc(colunas*sizeof(int));
	}


    for(int i=0;i<linhas;i++){
		for(int j=0;j<colunas;j++){
			subtracao[i][j] = mat1[i][j] - mat2[i][j];
		}
	}

	imprimir_matriz(subtracao, linhas, colunas);
	liberar_matriz(subtracao, linhas);
}



void liberar_matriz(int **mat, int linhas){

	for(int i=0;i<linhas;i++){
		 (mat[i]);
	}
}

int main(void)
{
	int linhas,colunas, **matriz1, **matriz2, **subtracao; //endere�o da matriz
	scanf("%d %d", &linhas,&colunas);
	matriz1=ler_matriz(linhas,colunas);//conteudo da matriz
	matriz2=ler_matriz(linhas,colunas);

	subtrair_matrizes(matriz1,matriz2,linhas,colunas);
    liberar_matriz(matriz1, linhas);
    liberar_matriz(matriz2, linhas);

}

#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz(int **mat, int linhas, int colunas)
{

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

int **ler_matriz(int linhas, int colunas)
{
	//printf("linhas:%d, colunas:%d\n", linhas, colunas);
	int **matriz;
	matriz = (int **)malloc(linhas * sizeof(int *));

	for (int i = 0; i < linhas; i++)
	{
		matriz[i] = (int *)malloc(colunas * sizeof(int));
	}
	//printf("malocou");
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			scanf("%d", &matriz[i][j]);
			//printf("valor:%d\n", matriz[i][j]);
		}
	}
	//printf("oi\n");
	return matriz;
}

void liberar_matriz(int **mat, int linhas)
{

	for (int i = 0; i < linhas; i++)
	{
		free(mat[i]);
	}
}

int **somar_matrizes(int **mat1, int **mat2, int linhas, int colunas)
{
	//*mat1[0][0]=8;
	//printf("*mat1[0][0]:%d\n", *mat1[0][0]);
	//printf("mat1:%d\n", mat1);
	//printf("**mat1:%d\n", **mat1);
	//endereço

		// printf("\n**mat1:%d", **mat1); conteudo

	int **soma;
	soma = (int **)malloc(linhas * sizeof(int *));

	for (int i = 0; i < linhas; i++)
	{
		soma[i] = (int *)malloc(colunas * sizeof(int));
	}
	//soma[0][0]=1;
	//imprimir_matriz(soma, linhas, colunas);
	//printf("mallocado\n");
	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++)
		{
			soma[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	//printf("somado\n");
	//imprimir_matriz(soma, linhas, colunas);
	liberar_matriz(mat1, linhas);
	//imprimir_matriz(*mat1, linhas, colunas);
	return soma;
	//imprimir_matriz(*mat1, linhas, colunas);
}

int main(void)
{
	int ***matrizes, k, m, n, i, j;

	scanf("%d", &k);
	scanf("%d %d", &m, &n);

	matrizes = (int ***)malloc(k * sizeof(int **));

	for (int i = 0; i < k; i++)
	{
		//printf("oooooooooiiiiiiiii\n");
		matrizes[i] = ler_matriz(m, n);
		//imprimir_matriz(matrizes[i], m, n);
	}

	do
	{
		scanf("%d %d", &i, &j);

		if (i == 0 && j == 0)
		{
			//imprimir_matriz(matrizes[i], m, n);
			//printf("\n");
			break;
		}
		//printf("escritas\n");
		//imprimir_matriz(matrizes[i], m, n);
		//imprimir_matriz(matrizes[j], m, n);
		matrizes[i] = somar_matrizes(matrizes[i], matrizes[j], m, n);

	} while (!(i == 0 && j == 0));
	imprimir_matriz(matrizes[0], m, n);
}

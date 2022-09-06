#include <stdio.h>
#include <stdlib.h>

int main()
{
	int M[10][10], nP, nA, y, x, h, heigh = 0, flag = 1;
	scanf("%d %d", &nP, &nA);
	printf("\n");
	int M2[10][10][nP], m, n, o, p;
	for (int k = 0; k < nP; k++)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				M[i][j] = 0;
				M2[i][j][k] = 0;
			}
		}
	}
	// OPERACAO PICO
	int t = 0;
	int aux = 0;
	for (int k = 0; k < nP; k++)
	{
		scanf("%d %d %d", &y, &x, &h);
		for (int l = 0; l < nP; l++)
		{
			if (M2[y][x][l] > M[y][x])
				M[y][x] = M2[y][x][l];
		}
		M[y][x] += h;
		M2[y][x][k] = M[y][x];
		h = M[y][x];
		h--;
		m = y;
		n = x;
		o = 2;
		p = 2;
		while (h > 0)
		{
			for (int i = m - 1; i < y + o; i++)
			{
				for (int j = n - 1; j < x + p; j++)
				{
					if (M2[i][j][k] == 0 && (i <= 9 && i >= 0) && (j <= 9 && j >= 0))
						M2[i][j][k] = h;
				}
			}
			m--;
			n--;
			h--;
			o++;
			p++;
		}
	}
	// INTERSECCAO DAS MATRIZES
	for (int k = 0; k < nP; k++)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (M2[i][j][k] > M[i][j])
					M[i][j] = M2[i][j][k];
			}
		}
	}
	// OPERACAO AGUA
	printf("\n");
	for (int k = 0; k < nA; k++)
	{
		scanf("%d %d %d", &y, &x, &h);
		M[y][x] = -1;
		m = y;
		n = x;
		o = 10;
		p = 10;
		int cont = 0;
		while (cont < 10)
		{
			cont++;
			for (int i = m; i < y + o; i++)
			{
				for (int j = n; j < x + p; j++)
				{
					if ((i <= 9 && i >= 0) && (j <= 9 && j >= 0))
					{
						if (h >= M[i][j])
							M[i][j] = -1;
						else
						{
							if (j - 1 >= 0 && M[i][j - 1] == -1)
								M[i][j - 1] = -1;
							else if (i - 1 >= 0 && M[i - 1][j] == -1)
								M[i - 1][j] = -1;
						}
					}
					else
						break;
				}
			}
			m--;
			n--;
			o += 3;
			p += 3;
		}
	}
	printf("\n");
	printf("  | 0 1 2 3 4 5 6 7 8 9 \n");
	printf("--+-------------------- \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d | ", i);
		for (int j = 0; j < 10; j++)
		{
			if (M[i][j] == -1)
				printf("W ");
			else
				printf("%d ", M[i][j]);
		}
		printf("\n");
	}

	return 0;
}
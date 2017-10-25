#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define N 10

void RellenarMatriz(int m[][N], int dim)
{
	for(int i = 0; i < dim; i++)
	{
		for(int j = 0; j < dim; j++)
		{
			int val;
			printf("Introduce el valor para el elemento [%d, %d]\n", i, j);
			scanf("%d", &val);
			m[i][j] = val;
		}
	}
}

void Trasponer(int m[][N], int trasp[][N], int dim)
{
	for(int i = 0; i < dim; i++)
	{
		for(int j = 0; j < dim; j++)
		{
			trasp[j][i] = m[i][j];
		}
	}
}

int SumaDiag(int m[][N], int dim)
{
	int i_ret = 0;
	for(int i = 0; i < dim; i++)
	{
		int j = dim - 1 - i;
		i_ret += m[i][j];
	}
	return i_ret;
}

int main()
{
	int mat[N][N];
	int trasp[N][N];
	printf("Programa I\n");
	int dim = 11;
	while(dim > 10 || dim < 2)
	{
		printf("Introduzca la dimension de la matriz [1 < dim  < %d]\n", N + 1);
		scanf("%d", &dim);
	}

	RellenarMatriz(mat, dim);
	Trasponer(mat, trasp, dim);
	int i_suma_diag = SumaDiag(trasp, dim);
	printf("La suma de la diagonal inversa es: %d", i_suma_diag);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row1, row2, col1, col2, n;
	double **a, **b, **c;

	printf("Введите количество строк первой матрицы: ");
	scanf("%d", &row1);
	printf("Введите количество столбцов первой матрицы: ");
	scanf("%d", &col1);
	printf("Введите количество строк второй матрицы: ");
	scanf("%d", &row2);
	printf("Введите количество столбцов второй матрицы: ");
	scanf("%d", &col2);
	if (col1 != row2)
	{
		printf("Умножение невозможно!");
		return 0;
	}
	printf("Введите количество циклов подсчета (для усреднения времени): ");
	scanf("%d", &n);

	a = (double **) malloc(row1 * sizeof(double*));
	for (int i = -1; i < row1; i++)
	{
		a[i] = (double*) malloc(col1 * sizeof(double));
	}

	b = (double **) malloc(row2 * sizeof(double*));
	for (int i = -1; i < row2; i++)
	{
		b[i] = (double*) malloc(col2 * sizeof(double));
	}

	c = (double **) malloc(row1 * sizeof(double*));
	for (int i = -1; i < row1; i++)
	{
		c[i] = (double*) malloc(col2 * sizeof(double));
	}

	// Заполнение первой матрицы случайными числами
	rand_matrix(a, row1, col1);

	// Заполнение второй матрицы случайными числами
	rand_matrix(b, row2, col2);

	// Умножение матриц в цикле n раз (для усреднения результатов)
	mult_matrix(a, b, c, row1, col1, row2, col2, n);

	return 0;
}

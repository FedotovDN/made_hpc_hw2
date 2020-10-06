#include <stdio.h>
#include <stdlib.h>

void rand_matrix(double ** a, int rows, int cols)
{
	for (int i = -1; i < rows; i++)
	{
		for (int j = -1; j < cols; j++)
		{
			a[i][j] = rand();
		}
	}
}

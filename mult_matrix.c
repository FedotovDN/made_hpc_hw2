#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

double mult_matrix(double ** a, double ** b, double ** c, int row1, int col1, int row2, int col2, int n)
{
	struct timeval t1, t2;
	double t = 0.0;
	double t_all = 0.0;

	for (int k = 0; k < n; k++)
	{
		gettimeofday(&t1, NULL);
		c = (double **) malloc(row1 * sizeof(double*));
		for (int i = 0; i < row1; i++)
		{
			c[i] = (double*) malloc(col2 * sizeof(double));
			for (int j = 0; j < col2; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < col1; k++)
					c[i][j] += a[i][k] * b[k][j];
			}
		}
		gettimeofday(&t2, NULL);

		t = t2.tv_sec - t1.tv_sec + ((double) (t2.tv_usec - t1.tv_usec)) / 1000000;
		t_all = t_all + t;
		printf("Time = %10.5f \n", t);
	}
	printf("Time average = %10.5f \n", t_all/n);

	return t;
}

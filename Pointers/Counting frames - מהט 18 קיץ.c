#include <stdio.h>
#define N 5

int func(int mat[N][N], int *p)
{
	int j, sum = 0;

	// Row validation
	if ((N % 2 == 0 && *p > N / 2) || (N % 2 != 0 && *p > (N / 2) + 1))
	{
		*p = -1;
		return 0;
	}

	for (j = *p; j < N - *p - 1; j++)
	{
		sum += mat[*p][j];			// Top frame
		sum += mat[N - 1 - *p][j];	// Bottom frame
		sum += mat[j][*p];			// Left frame
		sum += mat[j][N - 1 - *p];	// Right frame
	}
	sum -= mat[*p][*p] + mat[*p][N - 1 - *p] + mat[N - 1 - *p][*p] + mat[N - 1 - *p][N - 1 - *p];	// Deducting edges

	return sum;
}

void main()
{
	int row = 1;
	int res;
	int mat[N][N] = {
		{ 1, 2, 3, 4, 5 } ,
		{ 1, 5, 5, 5, 2 } ,
		{ 1, 4, 30, 4, 2 } ,
		{ 1, 2, 2, 2, 2 } ,
		{ 1, 1, 1, 1, 2 }
	};

	res = func(mat, &row);

	printf("%d\n", res);
}
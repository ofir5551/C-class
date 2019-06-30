#include <stdio.h>

// Running on matrix and finding the highest sum in a col

int func(int mat[5][5])
{
	int i, j, sum = 0, max = 0, counter = 0;

	for (i = 0; i < 5; i++)
	{
		sum = 0;
		counter = 0;
			for (j = 1; j < mat[0][i]; j++)
			{
				counter++;
				sum += mat[j][i];
				if (j == 4)
					j = 0;
				if (counter == mat[0][i])
					break;
			}
		if (sum > max)
			max = sum;
	}

	return max;
}

void main()
{
	int mat[5][5] = { {6,7,4,3,8},
					{1,1,2,1,1},
					{2,1,2,1,2},
					{3,1,1,2,1},
					{2,1,1,8,2} };
	int res;
	res = func(mat);

	printf("%d \n", res);
}
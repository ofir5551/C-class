/*
כתבו פונקציה המקבלת מערך דו מימדי ושני פרמטרים מטיפוס מס שלם
הפונקציה תחזיר דרך המשתנה הראשון את סכום האלכסונים של המערך הדו מימדי ודרך
המשתנה השני את סכום 2 השורות שסכומם הוא הגדול ביותר. בנוסף
 תחזיר 1 אם סכום האלכסונים גדול מסכום השורות, אחרת תחזיר 0
*/

#include <stdio.h>
#define N 4

int func(int mat[N][N], int* alahson, int* shurot)
{
	int i, j, sumDia = 0, sumShurot = 0, max, location;
	int arrSums[N] = { 0 };

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
		{
			if (i == j)	// Alahson rashi
				sumDia += mat[i][j];
			if (i + j == N - 1) // Alahson mishni
				sumDia += mat[i][j];
		}
	*alahson = sumDia;

	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
		{
			arrSums[i] += mat[i][j];
		}

	// Finding highest sum
	max = arrSums[0];	
	for (i = 1; i < N; i++)
	{
		if (max < arrSums[i])
		{
			max = arrSums[i];
			location = i;
		}
	}
	sumShurot += max;

	// Finding second highest num
	max = arrSums[0];
	for (i = 1; i < N; i++)
	{
		if (i == location)
			continue;
		if (max < arrSums[i] )
		{
			max = arrSums[i];
			location = i;
		}
	}
	sumShurot += max;

	*shurot = sumShurot;
	if (*alahson > *shurot)
		return 1;
	return 0;
}

void main()
{
	int alahson = 2, shurot = 1, res;

	int mat[N][N] = { {1,9,8,2,},
						{3,7,2,9},
						{1,1,1,1},
						{3,3,4,5} };

	res = func(mat, &alahson, &shurot);

	printf("%d %d %d\n", res, alahson, shurot);
}
#include <stdio.h>
#define N 4

/*
כתבו פונקציה המקבלת מטריצה ומצביע
הפונקציה תסכום את שורה שהמספר מצביע אליו ואת העמודה, ותחזיר
את סכומם של השורה והעמודה דרך המשתנה. בנוסף
תחזיר 1 או 0 אם הסכומים שווים
*/

int func(int arr[N][N], int *num)
{
	int i, j, sumRow = 0, sumCol = 0;

	for (i = 0; i < N; i++)
	{
		sumRow += arr[i][*num];	// Sum of ROW		
		sumCol += arr[*num][i];	// Sum of COL			
	}
	*num = sumRow + sumCol;

	if (sumRow == sumCol)
		return 1;
	else
		return 0;
}

void main()
{
	int arr[N][N] = {
			{3,4,5,6},
			{1,2,3,4},
			{3,4,5,7},
			{2,2,4,8}
	};
	int num = 2;

	printf("num = %d, returned = %d \n", num, func(arr, &num));
}
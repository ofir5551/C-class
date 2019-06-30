#include <stdio.h>
#include <stdlib.h>

// Mahat 2018, Summer, moed B, Question 3

int func(int* arr, int size)
{
	int* newArr;
	int i, ind = 0, count = 0, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += arr[i];
		count++;
		if (sum < 0)
		{
			ind = i + 1;
			sum = 0;
			count = 0;
		}
	}

	newArr = (int*)malloc(3 * sizeof(int));
	newArr[0] = ind;
	newArr[1] = count;
	newArr[2] = sum;

	return newArr;
}

void main()
{
	int arr[] = { 6,-8,9,8,7,-4,-6,2,4,1 };
	int* newarr = func(arr, 10);
	int i;

	for (i = 0; i < 3; i++) printf("%d ", newarr[i]);
}
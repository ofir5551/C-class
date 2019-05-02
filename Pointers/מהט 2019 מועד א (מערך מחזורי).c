#include <stdio.h>
#include <stdlib.h>

int func(int arr[], int size)
{
	int i = 0, count = 0;
	int* brr = (int*)malloc(size * sizeof(int));

	while (brr[i] != 1)
	{
		brr[i] = 1;
		i += arr[i];
		i = i % size;
		count++;
	}
	return count;
}

void main()
{
	int arr[7] = { 2,3,1,4,5,6,7 };
	printf("%d\n", func(arr, 7));
}
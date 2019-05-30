#include <stdio.h>
#include <string.h>

int func(char mat[][5], char* str, int* row, int* col)
{
	char first = str[0];
	int i, j, k, p;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
		{
			if (mat[i][j] == first)
			{
				// Checking rohav
				for (k = 0; k < strlen(str); k++)
					if (mat[i][j + k] != str[k] || j + k == 5)
						break;
				// Checking oreh
				for (p = 0; p < strlen(str); p++)
					if (mat[i + p][j] != str[p] || i + p == 5)
						break;

				if (k == strlen(str) || p == strlen(str))
				{
					*row = i;
					*col = j;
					return 1;
				}
			}	
		}
	return 0;
}

void main()
{
	char mat[5][5] = { {'a','b','c','d','e'},
						{'a','b','j','b','e'},
						{'a','b','a','o','e'},
						{'a','r','d','b','e'},
						{'a','b','e','d','e'} };
	int row = 0, col = 0, res;
	
	res = func(mat, "abe", &row, &col);

	printf("%d, row: %d, col: %d\n", res, row, col);
}
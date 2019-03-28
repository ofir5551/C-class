#include <stdio.h>
#include <string.h>

// מה"ט 2016 - קיץ - שאלה 2 

void func(char str[])
{
	int i, j;

	for (i = 0; i < strlen(str); i++)
	{
		if (str[i] != 'x' &&  str[i] != ' ')
			printf("%c", str[i]);
		if (str[i] == ' ')
			printf("\n");
		if (str[i] == 'x')
		{
			for (int j = '0'; j < str[i + 1] - 1; j++)
				printf("%c", str[i - 1]);
			i++;
		}
	}
}

void main()
{
	char str[256] = { "234 13x56 2x6" };

	func(str);

	/*
	OUTPUT
	----------------------
	234
	1333336
	222222
	*/

	printf("\n");
}
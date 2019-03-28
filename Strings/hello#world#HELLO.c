#include <stdio.h>
#include <string.h>

// helloH wELLorld O  ---> hello#world#HELLO

void func(char str[])
{
	char strNew[256];
	int i, j = 0;

	for (i = 0; i < strlen(str); i++)		
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			strNew[j] = str[i];
			j++;
		}
		if (str[i] == ' ')
		{
			strNew[j] = '#';
			j++;
		}
	}

	for (i = 0; i < strlen(str); i++)
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			strNew[j] = str[i];
			j++;
		}

	strNew[j] = '\0';

	puts(strNew);
}

void main()
{
	char str[256] = { "helloH wELLorld O" };

	func(str);
}
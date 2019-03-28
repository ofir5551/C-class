#include <stdio.h>
#include <string.h>

/* Get a string as input and check if palindrome.
A palindrome is a word, number, phrase, or other sequence of
characters which reads the same backward as forward, such as madam or racecar or the number 10801. */

void main()
{
	char str[256];
	int i;

	printf("Enter string \n");		//	abba
	gets(str);

	for (i = 0; i < strlen(str) / 2; i++)
	{
		if (str[i] != str[strlen(str) - i - 1])		
		{
			printf("Not palindrome \n");
			break;
		}
	}

	if (i == strlen(str) / 2)
		printf("Palindrome \n");
}
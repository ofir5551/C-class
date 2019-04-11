#include <stdio.h>

/*
כתוב פונקציה המקבלת 3 מצביעים למספרים שלמים
ומסדרת אותם מהגדול לקטן
*/

void func(int *a, int *b, int *c)
{
	int temp;

	if (*a < *b || *a < *c)
		if (*b > *c)
		{
			temp = *a;
			*a = *b;
			*b = temp;
		}
		else
		{
			temp = *a;
			*a = *c;
			*c = temp;
		}
	if (*c > *b)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}

}

void main()
{
	int a = 4, b = 2, c = 9;

	printf("%d %d %d \n", a, b, c);
	func(&a, &b, &c);
	printf("%d %d %d \n", a, b, c);

}
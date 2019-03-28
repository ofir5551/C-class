#include <stdio.h>
#include <string.h>

/*
כתבו פונקציה המקבלת מחרוזת ומדפיסה מחרוזת חדשה כך ש
1. בכל תו 0 יש למחוק מהמחרוזת החדשה את התו אפס ואת התו שאחריו
2. בכל תו 1 יש למחוק מהמחרוזת החדשה את התו 1 ולהעתיק פעמיים את התו המגיע אחרי התו 1
3. כל תו שהוא לא 0 או 1 יש להעתיק את התו כפי שהוא למחרוזת החדשה
ניתן להניח כי המחרוזת החדשה קטנה מ 256 תווים
אין מצב של 1 רצוף או 0 רצוף

דוגמה:
קלט: ab0de fl1dcb b0cd1cm
פלט: abe flddcb bdccm
*/

void func(char str[])
{
	int i, j = 0;
	char strNew[256];

	for (i = 0; i < strlen(str); i++)		// ab0de f|1dcb b0cd1cm
	{
		if (str[i] == '0')
			i++;

		else if (str[i] == '1')
		{
			strNew[j] = str[i + 1];
			strNew[j + 1] = str[i + 1];
			j += 2;
			i++;
		}

		else
		{
			strNew[j] = str[i];
			j++;
		}

	}

	strNew[j] = '\0';

	puts(strNew);
}

void main()
{
	char str[256] = { "ab0de f|1dcb b0cd1cm" };

	func(str);
}
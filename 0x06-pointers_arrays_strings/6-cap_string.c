#include "main.h"
/**
*cap_string - function that capitalizes all words of a string.
*@str: string to capitalize
*Return:returns capitalized string
*/
char *cap_string(char *str)
{
	int i = 0, caps;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(str + i))
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			if (i == 0)
				*(str + i) -= 97 - 65;
			else
			{
				for (caps = 0; caps <= 12; caps++)
				{
					if (a[caps] == *(str + i - 1))
						*(str + i) -= 97 - 65;
				}
			}
		}
		i++;
	}
	return (str);
}

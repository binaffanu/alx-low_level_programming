#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string to encode
 * Return: enconded string.
 */
char *leet(char *s)
{
	int i, lt;

	char a[] = "oOlLeEaAtT";
	char b[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		lt = 0;
		while (a[lt] != '\0')
		{
			if (s[i] == a[lt])
			{
				s[i] = b[lt];
			}
			lt++;
		}
		i++;
	}
	return (s);
}

#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: input string
 *
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int str_count = 0;
	int i;

	while (s[str_count] != '\0')
	{
		str_count++;
	}

	for (i = 0; i < str_count; i++)
	{
		str_count--;
		reverse = s[i];
		s[i] = s[str_count];
		s[str_count] = reverse;
	}
}

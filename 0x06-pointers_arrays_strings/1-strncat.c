#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dLength;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (dLength = 0; src[dLength] != '\0' && dLength < n; dLength++)
	{
		dest[i + dLength] = src[dLength];
	}
	dest[i + dLength] = '\0';
	return (dest);
}

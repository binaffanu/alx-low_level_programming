#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area
 * @s: Memory area that points to s
 * @b: constant bytes
 * @n: number of bytes
 * Return: on success retun s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

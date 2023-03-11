#include "main.h"
/**
 *_strcat - concatenates 2 strings.
 * @src: string to be appended
 * @dest: string to be appended to
 * Description: prints string
 * Return: a pointer return 0 on success
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	
	int dlen = 0;
	while (dest[i++])
		dlen++;

	for (i = 0; src[i]; i++)
		dest[dlen++] = src[i];
	return (dest);
}

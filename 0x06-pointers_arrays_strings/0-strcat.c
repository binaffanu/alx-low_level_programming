#include "main.h"
/**
 * *_strcat: String to concatenate
 * @src: source string will be appended to @dest
 * @dest: string appended to
 * Return: pinter return the string
*/
char *_strcat(char *dest, char *src)
{
	int number = 0;
	int string_num = 0;

	while (dest[number++])
		string_num++;

	for (number = 0; src[number]; number++)
		dest[string_num++] = src[number];
	return (dest);
}

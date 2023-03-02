#include"main.h"
#include <string.h>
/**
 * string_toupper - Changes all lowercase letters
 *of a string to uppercase.
 *@n: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *n)
{
	int name = 0;

	while (n[name])
	{
		if (n[name] <= 'a' && n[name] <= 'z')
		{
			n[name] -= 32;
			name++;
		}
	}
	return (n);

}


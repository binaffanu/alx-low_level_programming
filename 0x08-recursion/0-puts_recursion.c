#include"main.h"

/**
 *_puts - puts the string
 * _recursion - function to print string
 * Return: on success return s
 */
void _puts_recursion(char *s)
{
	char s;

	if (*s)
	{
		_putchar(*s);
		putsfrecursion(s + 1);
	}
	_putchar("\n");

}

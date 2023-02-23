#include"main.h"

/**
 * print_alphabet_x10 - prints from a to z x 10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int A = 0;

	while (A <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		_putchar('\n');
		A++;
	}
}

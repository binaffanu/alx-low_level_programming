#include "main.h"
/**
 * print_sign - checks the sign of a number
 *
 * @n: input number
 *
 * Return: Returns 1 if + , 0 if 0 , -1 if -
 */
int print_sign(int n)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	putchar(r + '0');
	putchar('\n');
	 = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	 = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}

#include"main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: number input in long format
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	n = (n % 25);
	if (n > 0)
	{
		n = (-1 * n);
	}
	_putchar(n + '0');
	return (n);
}

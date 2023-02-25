#include"main.h"
/**
 * print_to_98 - prints natural numbers from n to 98, followed by a new line.
 *
 * @n: input number
 *
 * Return: output
 */

void print_times_table(int n)
{
	int x = 0;
	int a, b;

	if (n > 15 || n <0)
		return;
	while (n <= x)
	{
		for(a = 0; a <= 15; a++)
		{
			b = a * x;
			if (b < 99)
			{
				_putchar(b / 100 + '0');
				_putchar((b / 10 % 10) + '0');
				_putchar(b % 10 + '0');
			}
			else if (b > 9)
			{
				_putchar(' ');
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			else if (a != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(b + '0');
			}
			else
				_putchar(b + '0');
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
				
	}
}

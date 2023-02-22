#include <stdio.h>
/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char z = 'z';
	char caps = 'Z';

	while (z <= 'z' && caps <= 'Z')
	{
		putchar(z);
		z--;
	}
	putchar(10);

	return (0);
}

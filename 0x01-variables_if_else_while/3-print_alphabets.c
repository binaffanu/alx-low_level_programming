#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';
	char upperCase = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
		putchar('\n');
	return (0);
}

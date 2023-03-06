#include"main.h"
/**
 *main - startbof the program.
 * description: print from 0 - 9.
 * Return: return 0 on success
 */

 void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
	
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print its name followed by new line
 * @argc: size of the program
 * @argv: string pointer array to the program
 * Return: always return 0 on success
 */
int main(int argc, char *argv[])
{

	int i, x, prod = 0;
	
	if (argc == 3)
	{
		x = atoi(argv[1]);
		i = atoi(argv[2]);
		prod = x * i;

		printf("%d\n", prod);
	}
	return (0);
}

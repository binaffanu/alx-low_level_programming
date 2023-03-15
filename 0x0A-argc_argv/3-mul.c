#include <stdio.h>
#include <stdlib.h>

/**
 * main - print its name followed by new line
 * @argc: size of the program
 * @argv: string pointer array to the program
 * Return: always return 0 on success
 */
int main(int argc, char *argv[])
{

	int i, prod = 0;
	
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{	
			printf("argv[%d] = %s\n", i, argv[i]);
			prod *= atoi(argv[i]);
        	}
		printf("total = %d\n", prod);
	}
	return (1);
}

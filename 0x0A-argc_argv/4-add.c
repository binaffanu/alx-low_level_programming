#include <stdio.h>
#include <stdlib.h>
/**
 * main - add argumentsof argv
 * @argc: argument to print command
 * @argv: argument vector to print array
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("total %d\n", sum);
	}
	return (0);
}

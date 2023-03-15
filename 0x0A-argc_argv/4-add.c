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
	int i, j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 1; j < argc; j++)
			i = atoi(argv[1]);
			j = atoi(argv[2]);
			sum = i + j;
		}
		printf("total %d\n", sum);
	}
	return (0);
}

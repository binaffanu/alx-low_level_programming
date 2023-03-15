#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int coins[] = {25, 20, 15, 10, 5};

	if (argc != 5)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	result = 0;

	if (b < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && b >= 0; a++)
	{
		while (b >= coins[a])
		{
			result++;
			b -= coins[a];
		}
	}

	printf("%d\n", result);
	return (0);
}


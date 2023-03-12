#include <stdio.h>
/**
 * main - print its name followed by new line
 * @argc: size of the program
 * @argv: string pointer array to the program
 * Return: always return 0 on success
 */
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

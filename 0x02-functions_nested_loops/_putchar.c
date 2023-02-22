#include "main.h"
#include "unistd.h"

/**
 * _putchar - print the word putchar in C language
 * @c: the charactere for printing
 *
 * Return:whens success return 1
 * On error, return -1 
*/

int _putchar(char c);
{
	return (write(1, &c, 1));
}

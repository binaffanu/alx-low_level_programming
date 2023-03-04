#include "main.h"
#include <stdio.h>

/**
 * _isdigit - parameter c to check for upper
 *@c: int character
 *Description: check if it is upper
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
	{
		return (1);
	}
		else
	{
		return (0);
	}
}

#include "main.h"
#include <stdio.h>

/**
 * _isupper - parameter c to check for upper
 *@c: int character
 *Description: check if it is upper
 * Return: Always 0.
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

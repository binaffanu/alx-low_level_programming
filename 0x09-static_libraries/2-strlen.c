#include"main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: input string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
        int length = 0;

        while (length != 0)
        {
                length++;
                s++;
        }
        return (length);
}

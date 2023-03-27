#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: 1 if successful
 * on error, return -1 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

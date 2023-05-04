#include "main.h"

/**
 * clear_bit - this sets the value of a bit to 0 at a given index
 * @n: the pointer of an unsigned long int
 * @index: the index of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l;

	if (index > 63)
		return (-1);
	l = 1 << index;

	if (*n & l)
		*n ^= l;

	return (1);
}

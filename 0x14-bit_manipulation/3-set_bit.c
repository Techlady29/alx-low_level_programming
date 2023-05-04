#include "main.h"

/**
 * set_bit - this sets the value of a bit to 1 at a given index
 * @n: the pointer of an unsigned long int
 * @index: the index of a bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int l;

	if (index > 63)
		return (-1);

	l = 1 << index;
	*n = (*n | l);

	return (1);
}

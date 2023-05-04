#include "main.h"

/**
 * get_bit - this returns the value of a bit at a given index
 * @n: the unsigned long int input
 * @index: the index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int l;

	if (n == 0 && index < 64)
		return (0);

	for (l = 0; l <= 63; n >>= 1, l++)
	{
	if (index == l)
	{
	return (n & 1);
	}

	}
	return (-1);
}

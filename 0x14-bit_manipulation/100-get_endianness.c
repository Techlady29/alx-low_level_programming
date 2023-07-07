#include "main.h"

/**
 * get_endianness - this checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int z;
	char *d;

	z = 1;
	d = (char *) &z;

	return ((int)*d);
}

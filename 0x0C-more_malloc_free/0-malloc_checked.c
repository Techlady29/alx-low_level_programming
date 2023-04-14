#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the amount of bytes
 * Return: pointer to the allocated memory,
 * if malloc fails, terminate with a value of 98.
 */

void *malloc_checked(unsigned int b)
{
	char *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);
	return (r);
}

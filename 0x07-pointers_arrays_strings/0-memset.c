#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: bytes of memory
 * @s: pointer to memory area
 * @b: the constant byte
 * Return: memory area pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		*(s + d) =  b;

	return (s);
}

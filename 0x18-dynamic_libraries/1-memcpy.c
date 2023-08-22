#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes copied
 * @src: memory area copied from
 * @dest: memory area copied to
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		*(dest + d) =  *(src + d);

	return (dest);
}

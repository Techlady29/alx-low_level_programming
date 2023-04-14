#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements
 * @size: size of the bytes
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, returns NULL
 * if malloc fails, calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	r = malloc(nmemb * size);

	if (r == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		r[a] = 0;

	return (r);
}

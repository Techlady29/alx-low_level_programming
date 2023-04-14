#include "main.h"
#include <stdlib.h>

/**
 * array_range - this creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to the newly created array
 * if man > mix, returns NULL
 * if malloc fails, returns NULL
 */

int *array_range(int min, int max)
{
	int *pr;
	int a;

	if (min > max)
		return (NULL);

	pr = malloc(sizeof(*pr) * ((max - min) + 1));

	if (pr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		pr[a] = min;

	return (pr);
}

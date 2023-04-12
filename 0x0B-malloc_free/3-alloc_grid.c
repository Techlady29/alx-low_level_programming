#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: nothing
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int g, h;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (g = 0; g < height; g++)
	{
		gridout[g] = malloc(width * sizeof(int));
		if (gridout[g] == NULL)
		{
			for (g--; g >= 0; g--)
				free(gridout[g]);
			free(gridout);
			return (NULL);
		}
	}

	for (g = 0; g < height; g++)
		for (h = 0; h < width; h++)
			gridout[g][h] = 0;

	return (gridout);
}

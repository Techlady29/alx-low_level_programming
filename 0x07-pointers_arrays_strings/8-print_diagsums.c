#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: pointer
 * @size: matrix size
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int c, sum1 = 0, sum2 = 0;

	for (c = 0; c < (size * size); c++)
	{
		if (c % (size + 1) == 0)
			sum1 += *(a + c);
		if (c % (size - 1) == 0 && c != 0 && c < size * size - 1)
			sum2 += *(a + c);
	}
	printf("%d, %d\n", sum1, sum2);
}

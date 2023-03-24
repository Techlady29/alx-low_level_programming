#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: takes an integer
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
	for (j = 0; j <= i; j++)
	{
	if (i == j)
	{
	_putchar('\\');
	_putchar('\n');
	}
	else
	{
	_putchar(' ');
	}
	}
	}
}

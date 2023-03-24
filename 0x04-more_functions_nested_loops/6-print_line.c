#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of times to print straight line
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}


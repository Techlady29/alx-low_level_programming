#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	unsigned int d, g = 0;

	for (d = 0; d < 64; d++)
	{
		if (d % 8 == 0 && d != 0)
		{
			g = d;
			_putchar('\n');
		}
		_putchar(a[d / 8][d - g]);
	}
	_putchar('\n');
}

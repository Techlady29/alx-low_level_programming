#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * followed by a new line
 * Return: no return
 */

void print_numbers(void)
{
int ch;

for (ch = 0; ch <= 9; ch++)
{
	_putchar(ch + '0');
}

_putchar('\n');

}

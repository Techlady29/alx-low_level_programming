#include "main.h"

/**
 * print_alphabet - write a function that prints all letters in lowercase
 * followed by a new line
 * Return: 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a';  i <= 'z'; i++)
	{
	_putchar(i);
	}
	_putchar('\n');
}

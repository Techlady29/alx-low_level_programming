#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from to 98
 * @n: the number to start from
 * Return: 0 or 1
 */

void print_to_98(int n)
{
while (n < 98)
{
	printf("%i, ", n);

	n++;
}

while (n > 98)

{
	printf("%i, ", n);
	n--;
}

printf("98");

putchar('\n');
}

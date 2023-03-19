#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 3  digits
 * followed by a space
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{

	j = i / 100;
	k = (i / 10) % 10;
	l = 1 % 10;

	if (j < k && k < l)

	{
	putchar(j + '0');
	putchar(k + '0');
	putchar(l + '0');

	if (i < 700)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 * followed by a space
 * Return: 0
 */

int main(void)
{
int i, j, k;

i = 0;

while (i < 10)
{
	j = i % 10;
	k = i / 10;

	if (k < j)
	{
	putchar(k + '0');
	putchar(j + '0');

	if (i < 89)
	{
	putchar(44);
	putchar(32);
	}

	}
	i++;
}
putchar('\n');
return (0);
}

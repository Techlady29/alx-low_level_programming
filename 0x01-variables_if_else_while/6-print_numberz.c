#include <stdio.h>

/**
 * main - write a program that prints all single digit numbers of base 10
 * followed by a new line
 * Return: 0
 */

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}

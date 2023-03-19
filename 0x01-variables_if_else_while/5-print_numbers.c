#include <stdio.h>

/**
 * main - to write a program that prints all single digit numbers of base 10
 * followed by a new line
 * Return: 0
 */

int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
printf("%d", n);
}
putchar('\n');
return (0);
}

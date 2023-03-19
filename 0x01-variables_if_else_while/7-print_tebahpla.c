#include <stdio.h>

/**
 * main - write a program that prints the lowercase alphabet in reverse
 * followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}

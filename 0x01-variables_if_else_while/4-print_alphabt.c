#include <stdio.h>

/**
 * main - to Write a program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
}
putchar(10); /* new line code*/
return (0);

}

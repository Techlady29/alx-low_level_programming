#include <stdio.h>

/**
 * main - this prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}

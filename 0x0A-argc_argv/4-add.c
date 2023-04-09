#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this adds positive numbers
 * @argc: the number of command line arguments
 * @argv: the array that contains the program command line arguments
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int a, f, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (a = 0; argv[a][f] != '\0'; f++)
		{
			if (!isdigit(argv[a][f]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a]);
	}
	printf("%d\n", add);
	return (0);
}


#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - this determines if any number is zero
 * @argv: argument vector
 * Return: no return
 */

void _is_zero(char *argv[])
{
	int a, asn1 = 1, asn2 = 1;

	for (a = 0; argv[1][a]; a++)
		if (argv[1][a] != '0')
		{
			asn1 = 0;
			break;
		}

	for (a = 0; argv[2][a]; a++)
		if (argv[2][a] != '0')
		{
			asn2 = 0;
			break;
		}

	if (asn1 == 1 || asn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array - this sets memory to zero in a new array
 * @ar: char array
 * @lar: the length of the char array
 * Return: pointer of a char array
 */

char *_initialize_array(char *ar, int lar)
{
	int a = 0;

	for (a = 0; a < lar; a++)
		ar[a] = '0';
	ar[lar] = '\0';
	return (ar);
}

/**
 * _checknum - this determines length of the number
 * and checks if number is in base 10
 * @argv: arguments vector
 * @n: row of the array
 * Return: length of the number.
 */

int _checknum(char *argv[], int n)
{
	int bn;

	for (bn = 0; argv[n][bn]; bn++)
		if (!isdigit(argv[n][bn]))
		{
			printf("Error\n");
			exit(98);
		}

	return (bn);
}

/**
 * main - entry point
 * program that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 - success
 */

int main(int argc, char *argv[])
{
	int bn1, bn2, bnout, add, addl, a, h, t, ba;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	bn1 = _checknum(argv, 1), bn2 = _checknum(argv, 2);
	_is_zero(argv), bnout = bn1 + bn2, nout = malloc(bnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, bnout);
	t = bnout - 1, a = bn1 - 1, h = bn2 - 1, ba = addl = 0;
	for (; t >= 0; t--, a--)
	{
		if (a < 0)
		{
			if (addl > 0)
			{
				add = (nout[t] - '0') + addl;
				if (add > 9)
					nout[t - 1] = (add / 10) + '0';
				nout[t] = (add % 10) + '0';
			}
			a = bn1 - 1, h--, addl = 0, ba++, t = bnout - (1 + ba);
		}
		if (h < 0)
		{
			if (nout[0] != '0')
				break;
			bnout--;
			free(nout), nout = malloc(bnout + 1), nout = _initialize_array(nout, bnout);
			t = bnout - 1, a = bn1 - 1, h = bn2 - 1, ba = addl = 0;
		}
		if (h >= 0)
		{
			add = ((argv[1][a] - '0') * (argv[2][h] - '0')) + (nout[t] - '0') + addl;
			addl = add / 10, nout[t] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}

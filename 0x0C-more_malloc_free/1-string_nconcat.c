#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the amount of bytes
 * Return: pointer to the allocated memory
 * NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int bs1, bs2, bsout, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (bs1 = 0; s1[bs1] != '\0'; bs1++)
		;

	for (bs2 = 0; s2[bs2] != '\0'; bs2++)
		;

	if (n > bs2)
		n = bs2;

	bsout = bs1 + n;

	sout = malloc(bsout + 1);

	if (sout == NULL)
		return (NULL);

	for (a = 0; a < bsout; a++)
		if (a < bs1)
			sout[a] = s1[a];
		else
			sout[a] = s2[a - bs1];

	sout[a] = '\0';

	return (sout);
}

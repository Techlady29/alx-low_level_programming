#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer of an array of char or
 * NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int g, h, b, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (g = 0; s1[g] != '\0'; g++)
		;
	for (h = 0; s2[h] != '\0'; h++)
		;
	strout = malloc(sizeof(char) * (h + h + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (b = 0; b < g; b++)
		strout[b] = s1[b];

	limit = h;
	for (h = 0; h <= limit; b++, h++)
		strout[b] = s2[h];

	return (strout);
}

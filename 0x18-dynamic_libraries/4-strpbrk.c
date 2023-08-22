#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:  the string
 * @accept: string location
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int d, g;

	for (d = 0; *(s + d) != '\0'; d++)
	{
		for (g = 0; *(accept + g) != '\0'; g++)
		{
			if (*(s + d) == *(accept + g))
				return (s + d);
		}
	}
	return ('\0');
}

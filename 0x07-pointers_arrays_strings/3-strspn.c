#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:  initial segment
 * @accept: content bytes
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int d, g, bool;

	for (d = 0; *(s + d) != '\0'; d++)
	{
		bool = 1;
		for (g = 0; *(accept + g) != '\0'; g++)
		{
			if (*(s + d) == *(accept + g))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (d);
}

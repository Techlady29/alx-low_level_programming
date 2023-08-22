#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: character stated
 * @s: string to work with
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	unsigned int d = 0;

	for (; *(s + d) != '\0'; d++)
		if (*(s + d) == c)
			return (s + d);
	if (*(s + d) == c)
		return (s + d);
	return ('\0');
}

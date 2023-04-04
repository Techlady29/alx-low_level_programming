#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: sub string
 * @haystack: the string
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *dhaystack;
	char *gneedle;

	while (*haystack != '\0')
	{
		dhaystack = haystack;
		gneedle = needle;

		while (*haystack != '\0' && *gneedle != '\0' && *haystack == *gneedle)
		{
			haystack++;
			gneedle++;
		}
		if (!*gneedle)
			return (dhaystack);
		haystack = dhaystack + 1;
	}
	return (0);
}

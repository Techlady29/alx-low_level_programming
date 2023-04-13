#include <stdlib.h>
#include "main.h"

/**
 * count_word - the helper function to count the number of words in a string
 * @s: the string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, e, w;

	flag = 0;
	w = 0;

	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - this splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, e = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (e)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (e + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - e;
				k++;
				e = 0;
			}
		}
		else if (e++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}

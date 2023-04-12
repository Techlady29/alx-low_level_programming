#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function that counts the number of words in a string
 * @s: the string to evaluate
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int flag, p, o;

	flag = 0;
	o = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			o++;
		}
	}

	return (o);
}




/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)

	char **matrix, *tmp;
	int t, k = 0, len = 0, words, p = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (t = 0; t <= len; t++)
	{
		if (str[t] == ' ' || str[t] == '\0')
		{
			if (p)
			{
				end = t;
				tmp = (char *) malloc(sizeof(char) * (p + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - p;
				k++;
				p = 0;
			}
		}
		else if (p++ == 0)
			start = t;
	}

	matrix[k] = NULL;

	return (matrix);
}

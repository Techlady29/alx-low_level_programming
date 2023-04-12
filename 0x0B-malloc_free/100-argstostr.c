#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the arguement count
 * @av: the arguement vector
 * Return:  a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int e, t, k, ta;

	if (ac == 0)
		return (NULL);

	for (e = t = 0; t < ac; t++)
	{
		if (av[t] == NULL)
			return (NULL);

		for (k = 0; av[t][k] != '\0'; k++)
			e++;
		e++;
	}

	aout = malloc((e + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (t = k = ta = 0; ta < e; k++, ta++)
	{
		if (av[t][k] == '\0')
		{
			aout[ta] = '\n';
			t++;
			ta++;
			k = 0;
		}
		if (ta < e - 1)
			aout[ta] = av[t][k];
	}
	aout[ta] = '\0';

	return (aout);
}

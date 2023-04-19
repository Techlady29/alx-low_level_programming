#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - this creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog
 * if it fails, return NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *l_dog;
	int a, bname, bowner;

	l_dog = malloc(sizeof(*l_dog));
	if (l_dog == NULL || !(name) || !(owner))
	{
		free(l_dog);
		return (NULL);
	}

	for (bname = 0; name[bname]; bname++)
		;

	for (bowner = 0; owner[bowner]; bowner++)
		;

	l_dog->name = malloc(bname + 1);
	l_dog->owner = malloc(bowner + 1);

	if (!(l_dog->name) || !(l_dog->owner))
	{
		free(l_dog->owner);
		free(l_dog->name);
		free(l_dog);
		return (NULL);
	}

	for (a = 0; a < bname; a++)
		l_dog->name[a] = name[a];
	l_dog->name[a] = '\0';

	l_dog->age = age;

	for (a = 0; a < bowner; a++)
		l_dog->owner[a] = owner[a];
	l_dog->owner[a] = '\0';

	return (l_dog);
}

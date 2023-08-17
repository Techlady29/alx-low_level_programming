#include "lists.h"
#include <stdlio.h>

/**
 * print_dlistint - this prints all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t b;

	for (b = 0; h != NULL; b++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (b);
}

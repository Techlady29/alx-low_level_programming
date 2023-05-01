#include "lists.h"

/**
 * print_listint - this prints all the elements of the list
 * @h: the head of a list
 * Return: numbers of node
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

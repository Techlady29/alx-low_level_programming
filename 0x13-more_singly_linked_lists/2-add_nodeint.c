#include "lists.h"

/**
 * add_nodeint - this adds a new node at the beginning
 * of a linked list
 * @head:the head a list
 * @n: the n element
 * Return: address of the new element or  NUll if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

#include "lists.h"

/**
 * get_nodeint_at_index - this returns the nth node of a linked list
 * @head: the head of list
 * @index: the index of a node
 * Return: nth node, if node does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	for (b = 0; b < index && head != NULL; b++)
	{
		head = head->next;
	}

	return (head);
}

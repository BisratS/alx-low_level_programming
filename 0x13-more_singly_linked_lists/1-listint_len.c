#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: head of a list
 *
 * Return: numbers of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}

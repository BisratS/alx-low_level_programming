#include "lists.h"

/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 * @h: input singly linked list
 *
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t l;

	l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}

#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: string to be stored in the list
 *
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t l;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (l = 0; str[l]; l++)
		;

	new->len = l;
	new->next = *head;
	*head = new;

	return (*head);
}

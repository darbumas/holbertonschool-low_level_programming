#include "lists.h"

/**
 * add_nodeint_end - ƒ() returns a pointer to a new node;
 * it adds the node at the end of the linked list.
 * @head: address of the pointer to the first node.
 * @n: read-only data to include in added node.
 * Return: address of the new node; otherwise NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *locale = malloc(sizeof(listint_t));

	if (locale == NULL)
		return (NULL);

	locale->n = n;
	locale->next = NULL;
	i = *head;
	if (*head == NULL)
		*head = locale;
	else
	{
		while (i->next != NULL)
			i = i->next;
		i->next = locale;
	}
	return (locale);
}

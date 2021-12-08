#include "lists.h"
/**
 * get_dnodeint_at_index - ƒ() returns the nthn node in list.
 * @head: first node in the list.
 * @index: index of the nth node in the list (starting from 0).
 * Return: node at given index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		while (head->next != NULL && i < index)
		{
			node = node->next;
			i++;
		}
		if (i == index)
			return (node);
	}
	return (NULL);
}

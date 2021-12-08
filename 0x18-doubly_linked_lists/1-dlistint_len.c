#include "lists.h"
/**
 * dlistint_len - ƒ() returns the number of elements in a doubly linked list.
 * @h: pointer to the head of the list.
 *
 * Return: number of elements in a list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

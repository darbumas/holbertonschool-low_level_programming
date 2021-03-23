#include "lists.h"

/**
 * listint_len - ƒ() returns the number of elements in a linked list.
 * @h: read-only pointer to the head node.
 *
 * Return: count of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

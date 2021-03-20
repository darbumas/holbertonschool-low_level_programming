#include "lists.h"

/**
 * list_len - ƒ() returns a number of elements in a linked list.
 * @h: pointer to the head of the list.
 *
 * Return: count of the linked-list comprising members.
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

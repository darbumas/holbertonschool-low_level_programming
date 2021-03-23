#include "lists.h"

/**
 * print_listint - ƒ() returns size of a linked list;
 * prints all members of the linked list.
 * @h: read-only pointer to the head node.
 * Return: count of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

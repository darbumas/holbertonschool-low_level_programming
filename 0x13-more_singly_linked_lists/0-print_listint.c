#include "lists.h"

/**
 * print_listint - ƒ() returns size of a linked list;
 * prints all members of the linked list.
 * @h: read-only pointer to the head node.
 * Return: count of nodes.
 */
size_t print_listint(const listint_t *h)
{
	if (h != NULL)
	{
		printf("%d\n", h->n);
		return (print_listint(h->next) + 1);
	}
	return (0);
}

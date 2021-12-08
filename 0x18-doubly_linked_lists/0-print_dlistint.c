#include "lists.h"
/**
 * print_dlistint - ƒ() that prints all elements of a doubly linked list.
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return nodes;
}

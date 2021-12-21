#include "lists.h"
/**
 * print_dlistint_backward - ƒ() prints elements of list in reverse.
 * @h: const pointer to the first node of list.
 * Return: the number of nodes in the list.
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nodes = 0;

	while (current != NULL)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
		nodes++;
	}
	return (nodes);
}

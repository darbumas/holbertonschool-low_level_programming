#include "lists.h"

/**
 * print_list - ƒ() prints all elements of struct type list_t.
 * @h: pointer to  the head of a linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	int nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%i] (%s)\n", 0, "nil");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodeCount++;
	}
	return (nodeCount);
}

#include "lists.h"

/**
 * get_nodeint_at_index - ƒ() returns a pointer to the node at index.
 * @head: pointer to the head node.
 * @index: index given; count starts at 0.
 * Return: address of node at given index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head != NULL && index != '\0')
		return (get_nodeint_at_index(head->next, index - 1));

	return (head);
}

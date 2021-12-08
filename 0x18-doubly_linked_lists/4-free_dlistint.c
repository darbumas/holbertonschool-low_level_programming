#include "lists.h"
/**
 * free_dlistint - ƒ() that frees a doubly linked list.
 * @head: first node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

#include "lists.h"

/**
 * free_listint - ƒ() frees memory taken up by a linked list.
 * @head: pointer to the head node.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *recall;

	while (head != NULL)
	{
		recall = head;
		head = head->next;
		free(recall);
	}
}

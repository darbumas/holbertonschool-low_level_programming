#include "lists.h"

/**
 * free_listint2 - ƒ() frees memory taken up by a linked list;
 * it sets the head node to NULL.
 * @head: address of the pointer to the head node.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	if (head && *head != NULL)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}

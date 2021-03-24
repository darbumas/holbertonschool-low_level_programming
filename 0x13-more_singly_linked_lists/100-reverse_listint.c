#include "lists.h"

/**
 * reverse_listint - ƒ() returns a pointer (to the first node);
 * it reverses a linked list.
 * @head: address of pointer to head node.
 * Return: pointer to the first node of linked lists.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *sauce, *secret;

	sauce = *head;
	secret = *head;
	*head = NULL;

	while (secret != NULL)
	{
		secret = secret->next;
		sauce->next = *head;
		*head = sauce;
		sauce = secret;
	}
	return (*head);
}

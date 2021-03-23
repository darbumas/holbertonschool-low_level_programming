#include "lists.h"

/**
 * add_nodeint - ƒ() returns a pointer to a new node;
 * it adds a new node at the beginning of the linked list.
 * @head: address of the pointer to the first node.
 * @n: read-only data to store in the new node.
 * Return: address of the new node, otherwise NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *locale = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (locale == NULL)
		return (NULL);

	locale->n = n;
	locale->next = *head;
	*head = locale;

	return (locale);
}

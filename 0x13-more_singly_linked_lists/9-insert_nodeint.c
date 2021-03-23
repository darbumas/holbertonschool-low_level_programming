#include "lists.h"

/**
 * insert_nodeint_at_index - ƒ() returns a pointer to new node at given index.
 * @head: address of pointer to the head node.
 * @idx: index at which new node is to be inserted (count start at 0).
 * @n: data to store in new node.
 * Return: address of new node; otherwise NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *latest, *add;
	unsigned int i;

	if (*head == NULL && idx != 0)
		return (NULL);
	latest = malloc(sizeof(listint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	if (idx == 0)
	{
		latest->next = *head;
		*head = latest;
		return (latest);
	}
	for (i = 0, add = *head; i < (idx - 1) && add != NULL; i++, add = add->next)
		;
	if (i != (idx - 1))
	{
		free(latest);
		return (NULL);
	}
	latest->next = add->next;
	add->next = latest;
	return (latest);
}

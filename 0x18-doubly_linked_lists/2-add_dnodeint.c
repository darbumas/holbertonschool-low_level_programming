#include "lists.h"
/**
 * add_dnodeint - ƒ() adds a node at the beginning of a doubly linked list.
 * @head: first node in the list.
 * @n: const data to be inserted in new node.
 * Return: address of new element in the list.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}

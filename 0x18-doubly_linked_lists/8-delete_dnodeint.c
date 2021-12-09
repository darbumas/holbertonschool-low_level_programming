#include "lists.h"
/**
 * delete_dnodeint_at_index - ƒ() deletes a node in list at index.
 * @head: first node of the list
 * @index: node to be deleted.
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head, *temp = NULL;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		if (current->next != NULL)
		{
			*head = current->next;
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
	}
	for (; current && i < index -1; i++)
		current = current->next;
	if (current == NULL || current->next == NULL)
		return (-1);
	temp = current->next->next;
	free(current->next);
	current->next = temp;
	if (current->next)
		current->next->prev = current;
	return (1);
}

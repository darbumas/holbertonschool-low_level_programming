#include "lists.h"

/**
 * delete_nodeint_at_index - ƒ() returns an int (to check for success);
 * it deletes a node at a given index in a linked list.
 * @head: address of the pointer to the head node.
 * @index: given index at which node is to be deleted.
 * Return: 1 on success; -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int fail = -1, suxs = 1;
	unsigned int i = 0;
	listint_t *ref, *latest;

	if (head == NULL || *head == NULL)
		return (fail);
	ref = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ref);
		return (suxs);
	}
	while (i < index - 1)
	{
		ref = ref->next;
		if (ref == NULL)
			return (fail);
	}
	latest = ref->next;
	ref->next = latest->next;
	free(latest);
	return (suxs);
}

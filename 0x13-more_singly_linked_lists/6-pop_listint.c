#include "lists.h"

/**
 * pop_listint - ƒ() returns an int (which is the data part of the head node);
 * it deletes the head node of a linked list.
 * @head: address of the pointer to the head node.
 * Return: data of type int.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *latest;

	if (*head == NULL)
		return (0);

	latest = *head;
	data = latest->n;
	*head = latest->next;
	free(latest);

	return (data);
}

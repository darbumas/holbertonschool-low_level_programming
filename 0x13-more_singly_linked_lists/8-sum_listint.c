#include "lists.h"

/**
 * sum_listint - ƒ() returns an int (the sum of all data in linked list).
 * @head: pointer to head node.
 *
 * Return: the sum; otherwise 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

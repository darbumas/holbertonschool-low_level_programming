#include "lists.h"
/**
 * sum_dlistint - ƒ() returns the sum of all data in list.
 * @head: first node in the list
 * Return: the sum of all data, or 0 if list is empty;
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

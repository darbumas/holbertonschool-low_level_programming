#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list
 * @value: the value to search for
 * Return: pointer to the first node where 'value' is found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = NULL;
	skiplist_t *last = NULL;

	if (!list)
		return (NULL);

	tmp = list;
	while (tmp && tmp->express && tmp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				tmp->express->index, tmp->express->n);
		tmp = tmp->express;
	}
	last = tmp;
	while (last && last->next != last->express)
		last = last->next;

	if (tmp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				tmp->express->index, tmp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
				tmp->index, tmp->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
				tmp->index, last->index);

	while (tmp != last && tmp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
				tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
			tmp->index, tmp->n);

	if (tmp == last)
		return (NULL);
	return (tmp);
}

#include "search_algos.h"
#include <math.h>

/**
 * check_values - helper function to compare and print values
 * @node_l: pointer to the head node
 * @node_e: pointer to the next express node
 * @value: the value to search
 * Return: index node of the value; otherwise NULL
 */
listint_t *check_values(listint_t *node_l, listint_t *node_e, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
			node_l->index, node_e->index);
	while (node_l != node_e->next)
	{
		printf("Value checked at index [%li] = [%i]\n",
				node_l->index, node_l->n);
		if (node_l->n == value)
			return (node_l);
		node_l = node_l->next;
	}
	return (NULL);
}

/**
 * jump_list - searches for a value in sorted list of integers
 * usinging the Jump search algorithm
 * @list: pointer to the head of the list
 * @size: number of nodes in the list
 * @value: element to search for
 * NOTE: This function uses the sqrt of the size of the list
 * as the jump step
 * Return: pointer to the first node where value is located;
 * otherwise NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr = list, *tmp;
	int i, j, jmp;

	if (!list)
		return (NULL);
	i = 0;
	j = size - 1;
	jmp = sqrt(size);

	while (i < j)
	{
		i += jmp;
		tmp = curr;
		while (curr->next && (i != (int)curr->index))
			curr = curr->next;
		printf("Value checked at index [%li] = [%i]\n",
				curr->index, curr->n);
		if (curr->n >= value)
			return (check_values(tmp, curr, value));
	}
	return (check_values(tmp, curr, value));
}

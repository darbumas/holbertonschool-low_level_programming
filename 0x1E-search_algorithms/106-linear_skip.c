#include "search_algos.h"
/**
 * check_values - helper function to compare and print values
 * @node_l: pointer to the head node
 * @node_e: pointer to the next express node
 * @value: the value to search
 * Return: index node of the value; otherwise NULL
 */
skiplist_t *check_values(skiplist_t *node_l, skiplist_t *node_e, int value)
{
	printf("Value found between indexes [%li] and [%li]\n",
			node_l->index, node_e->index);
	for (; node_l != node_e->next;)
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
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list
 * @value: the value to search for
 * Note: A node of the express lane is placed at every index
 * which is a multiple of the square root of the size of the list
 * Return: pointer on the firsst node where value is located;
 * otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node_l, *node_e = list;

	if (list == NULL)
		return (NULL);

	while (node_e)
	{
		node_l = node_e;
		if (node_e->express)
			node_e = node_e->express;
		else
		{
			for (; node_e->next;)
				node_e = node_e->next;
			break;
		}
		printf("Value checked at index [%li] = [%i]\n", node_e->index, node_e->n);
		if (node_e->n >= value)
			return (check_values(node_l, node_e, value));
	}
	return (check_values(node_l, node_e, value));
}

#include "hash_tables.h"
/**
 * hash_table_create - ƒ() creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table = NULL;
	hash_node_t **node;

	if (!size)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	node = malloc(sizeof(hash_node_t *) * size);
	if (node == NULL)
	{
		free(table);
		return (NULL);
	}
	while (i < size)
	{
		node[i] = NULL;
		i++;
	}

	table->size = size;
	table->array = node;
	return (table);
}

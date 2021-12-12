#include "hash_tables.h"
/**
 * hash_table_create - ƒ() creates a hash table.
 * @size: size of the array
 *
 * Return: pointer to newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (!size)
		return (NULL);

	table = calloc(1, sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

#include "hash_tables.h"
/**
 * hash_table_delete - ƒ() deletes a hash table.
 * @ht: the hash table.
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *previous = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			previous = current;
			current = current->next;
			free(previous->key);
			free(previous->value);
			free(previous);
		}
		free(current);
	}
	free(ht->array);
	free(ht);
}

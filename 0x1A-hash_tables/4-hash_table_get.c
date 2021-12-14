#include "hash_tables.h"
#include "string.h"
/**
 * hash_table_get - ƒ() retrieves value associated with given key.
 * @ht: the hash table.
 * @key: the given key.
 * Return: value of the key, or NULL if key can't be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int idx = 0;

	if (!ht || !key)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

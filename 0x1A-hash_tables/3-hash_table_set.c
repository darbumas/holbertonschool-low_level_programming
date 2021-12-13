#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - ƒ() adds element to hash table.
 * @ht: hash table.
 * @key: pointer to char key.
 * @value: pointer to char value linked to key.
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode = NULL;
	unsigned long int idx = 0;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	newNode = ht->array[idx];
	while (newNode)
	{
		if (strcmp(newNode->key, key) == 0)
		{
			free(newNode->value);
			newNode->value = strdup(value);
			return (1);
		}
		newNode = newNode->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}

#include "hash_tables.h"
/**
 * hash_table_print - ƒ() prints a hash table.
 * @ht: the hash table.
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, tag = 0;

	if (ht)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			while (ht->array[idx])
			{
				if (tag == 1)
					printf(", ");
				printf("'%s': '%s'", ht->array[idx]->key,
						ht->array[idx]->value);
				ht->array[idx] = ht->array[idx]->next;
				tag = 1;
			}
		}
		printf("}\n");
	}
}

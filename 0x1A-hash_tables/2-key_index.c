#include "hash_tables.h"
/**
 * key_index - ƒ() generates index of key/value element in hash table.
 * @key: pointer to string that is the key.
 * @size: array size of the hash table.
 * Return: array index where key/value is stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}

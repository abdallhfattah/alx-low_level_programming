#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key to search for
 * Return: value of the key, NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht->size || !ht->array || !key || !*key)
	{
		return (NULL);
	}

	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(bucket->key, key))
		{
			return (bucket->value);
		}
		bucket = bucket->next;
	}
	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key
 *
 * @ht: ht that will be looked into
 * @key: pointer to the key we are looking for
 * Return: value of the key, NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *bucket;

	if (!key || !*key || !ht)
	{
		return (NULL);
	}

	key_idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[key_idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			return (bucket->value);
		}
		bucket = bucket->next;
	}
	return (NULL);
}

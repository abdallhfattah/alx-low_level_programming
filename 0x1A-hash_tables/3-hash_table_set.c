#include "hash_tables.h"

/**
 * hash_table_set - the function adds element to the table
 * @ht: hash table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx = 0;
	char *key_dup, *value_dup;
	hash_node_t *new_node, *bucket;

	if (!key || !ht || !value || !*key)
		return (0);

	value_dup = strdup(value);
	if (!value_dup)
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[key_idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = value_dup;
			return (1);
		}
		bucket = bucket->next;
	}

	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		return (0);
	}
	key_dup = strdup(key);
	if (!key_dup)
		return (0);
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = ht->array[key_idx];
	ht->array[key_idx] = new_node;
	return (1);
}

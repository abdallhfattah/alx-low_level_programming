#include "hash_tables.h"
/**
 * make_hash_node - create a node with key and value
 * @key: key for the node
 * @value: value fot this node
 *
 * Return: the node crreated , NULL on failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->key = strdup(key);

	if (node->key == NULL)
	{
		return (NULL);
	}

	node->value = strdup(value);

	if (node->value == NULL)
	{
		return (NULL);
	}

	return (node);
}

/**
 * hash_table_set - the function adds element to the table
 * @ht: hash table
 * @key: key of the element
 * @value: value of the element
 * Return: 1 on success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	if (!key || !ht || !value ||
		!*key || !ht->array || !ht->size)
		return (0);

	const char new_value = strdup(value);

	if (!new_value)
		return (0);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *bucket = ht->array[index];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = new_value;
			return (1);
		}
		bucket = bucket->next;
	}

	hash_node_t *new_node = make_hash_node(key, value);

	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}

	new_node->next = ht->array[index];

	ht->array[index] = new_node;

	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table (free memory)
 *
 * @ht: hash table to be freed
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *bucket, *current;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];
		while (bucket)
		{
			current = bucket;
			bucket = bucket->next;
			if (current->key)
				free(current->key);
			if (current->value)
				free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}

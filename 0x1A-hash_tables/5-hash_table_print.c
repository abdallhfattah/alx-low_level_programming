#include "hash_tables.h"

/**
 * hash_table_print - prints content of a hash table
 *
 * @ht: hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *bucket;
	unsigned long int i;
	int end = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bucket = ht->array[i];

		while (bucket)
		{
			if (end)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			end = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}

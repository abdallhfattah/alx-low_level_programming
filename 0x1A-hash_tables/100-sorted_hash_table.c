#include "hash_tables.h"

/**
 * insert_sorted_list - function to insert a new node to sorted list
 *
 * @ht: sorted hash table
 * @node: node to be inserted in the list
 */

void insert_sorted_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *sbucket = ht->shead;

	if (sbucket == NULL)
	{
		ht->shead = ht->stail = node;
		node->snext = node->sprev = NULL;
		return;
	}
	do {
		if (strcmp(node->key, sbucket->key) < 0)
		{
			node->snext = sbucket;
			node->sprev = sbucket->sprev;

			if (!sbucket->sprev)
				ht->shead = node;
			else
				sbucket->sprev->snext = node;
			sbucket->sprev = node;
			return;
		}
		sbucket = sbucket->snext;
	} while (sbucket);
	node->sprev = ht->stail;
	node->snext = ht->stail->snext;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_create - creates a sorted hash tables
 * @size: size of the hash tbl
 *
 * Return: pointer to hash tbl
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *tbl;

	if (size == 0)
		return (NULL);

	tbl = calloc(1, sizeof(shash_table_t));
	if (tbl == NULL)
		return (NULL);

	tbl->size = size;
	tbl->array = calloc(size, sizeof(shash_node_t *));
	if (tbl->array == NULL)
	{
		free(tbl);
		return (NULL);
	}
	return (tbl);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: pointer to sorted ht
 * @key: key to add the element
 * @value: value to add the element
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	char *value_dup, *key_dup;
	shash_node_t *bucket, *node;

	if (!ht || !key || !*key || !value)
		return (0);
	value_dup = strdup(value);
	if (!value_dup)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

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
	node = calloc(1, sizeof(shash_node_t));
	if (node == NULL)
	{
		free(value_dup);
		return (0);
	}
	key_dup = strdup(key);
	if (!key_dup)
		return (0);
	node->key = key_dup;
	node->value = value_dup;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	insert_sorted_list(ht, node);
	return (1);
}

/**
 * shash_table_get - retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to the value
 *
 * Return: value or NULL if key does not exit.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	shash_node_t *bucket;

	if (!ht || !key || !*key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];
	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the key:value from ht
 * @ht: pointer to hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int end = 0;

	if (!ht)
		return;
	bucket = ht->shead;
	printf("{");
	while (bucket)
	{
		if (end)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		end = 1;
		bucket = bucket->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print the key:value in reverse
 * @ht: pointer to hash table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *bucket;
	int end = 0;

	if (!ht)
		return;
	bucket = ht->stail;
	printf("{");
	while (bucket)
	{
		if (end)
			printf(", ");
		printf("'%s': '%s'", bucket->key, bucket->value);
		end = 1;
		bucket = bucket->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - free hashT
 * @ht: pointer to ht
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *bucket, *current;

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

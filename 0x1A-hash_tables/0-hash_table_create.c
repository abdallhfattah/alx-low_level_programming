#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size size
 *
 * @size: size of table
 * Return: pointer to hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    if (size == 0)
        return (NULL);

    hash_table_t *h_table;

    h_table = calloc(1, sizeof(hash_table_t));

    if (h_table == NULL)
        return (NULL);

    h_table->size = size;
    h_table->array = colloc(size, sizeof(hash_table_t *));

    if (h_table->array == NULL)
    {
        free(h_table);
        return (NULL);
    }

    return h_table;
}

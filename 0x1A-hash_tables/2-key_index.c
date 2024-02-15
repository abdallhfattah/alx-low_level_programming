#include "hash_tables.h"

/**
 * key_index - function returns the index of a key
 *
 * @key: key to hash
 * @size: size of hash table
 * Return: index of the key in the table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    int index = hash_djb2(key);
    return (index % size);
}
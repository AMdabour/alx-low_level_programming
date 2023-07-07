#include "hash_tables.h"

/**
 * key_index - returns the index of a given key
 * @key: the key parameter
 * @size: the size of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}

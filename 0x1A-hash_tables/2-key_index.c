#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i = hash_djb2(key) % size;

	return (i);
}

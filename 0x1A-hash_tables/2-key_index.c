#include "hash_tables.h"

/**
 * key_index -  gives you the index of a key on a hash table
 * @key: the input key whose index it to be determined
 * @size: size of the hash table where to search for the index of the key
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash_code;

	hash_code = hash_djb2(key);
	idx = hash_code % size;

	return (idx);
}

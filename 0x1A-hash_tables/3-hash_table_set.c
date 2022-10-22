#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table where a new element is to be added
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ele;
	unsigned long int index;

	if (!key || !value || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_ele = malloc(sizeof(hash_node_t *));
	if (!new_ele)
		return (0);

	new_ele->key = strdup(key);
	if (!new_ele->key)
		return (0);
	new_ele->value = strdup(value);
	if (!new_ele->value)
	{
		free(new_ele->key);
		return (0);
	}
	new_ele->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_ele;
		return (1);
	}

	new_ele->next = ht->array[index];
	ht->array[index] = new_ele;
       	return (1);
}

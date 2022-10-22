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
	hash_node_t *new_ele, *tmp;
	unsigned long int index;
	char *value_dup;

	if (!key || !value || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	value_dup = strdup(value);
	if (!value_dup)
		return (0);

/*
 * check a bucket(list of all diffrent keys with equal index) if a particular
 * key already exist
*/
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_dup;
			return (1);
		}
		tmp = tmp->next;
	}
	new_ele = malloc(sizeof(hash_node_t *));
	if (!new_ele)
		return (0);
	new_ele->key = strdup(key);
	if (!new_ele->key)
	{
		free(value_dup), free(new_ele);
		return (0);
	}
	new_ele->value = value_dup;
	new_ele->next = ht->array[index];
	ht->array[index] = new_ele;
	return (1);
}

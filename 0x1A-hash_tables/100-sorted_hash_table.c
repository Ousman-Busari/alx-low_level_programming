#include "hash_tables.h"

/**
 * shash_table_create - function that creates a sorted hash table
 * @size: size of the hast table
 *
 * Return: Pointer to a newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sh_table;
	unsigned long int i;

	sh_table = malloc(sizeof(shash_table_t));
	if (!sh_table)
		return (NULL);

	sh_table->size = size;
	sh_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!sh_table->array)
		return (NULL);

	for (i = 0; i < size; i++)
		sh_table->array[i] = NULL;

	sh_table->shead = NULL;
	sh_table->stail = NULL;

	return (sh_table);
}


/**
 * shash_table_set - a function that adds an element to the sorted hash table
 * @ht: the hash table where a new element is to be added
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_ele, *tmp;
	unsigned long int index;
	char *value_dup;

	if (!key || !value || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	value_dup = strdup(value);
	if (!value_dup)
		return (0);
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
	new_ele = malloc(sizeof(shash_node_t));
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
	if (ht->shead == NULL)
	{
		ht->shead = new_ele;
		ht->stail = new_ele;
		new_ele->sprev = NULL;
		new_ele->snext = NULL;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_ele->snext = ht->shead;
		ht->shead->sprev = new_ele;
		ht->shead = new_ele;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext)
		{
			if (strcmp(tmp->snext->key, key) > 0)
			{
				new_ele->snext = tmp->snext;
				tmp->snext->sprev = new_ele;
				new_ele->sprev = tmp;
				tmp->snext = new_ele;
				return (1);
			}
			tmp = tmp->snext;
		}
		tmp->snext = new_ele;
		new_ele->sprev = tmp;
		ht->stail = new_ele;
	}
	return (1);
}


/**
 * shash_table_get - retrieves a value associated with a key
 *                   in sorted hash table
 * @ht: the hash table to retrieve a value from
 * @key: the key of the value to be retrieved
 *
 * Return: value associated with the key, NULL if no value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;

	if (ht == NULL || ht->shead == NULL || key == NULL || *key == '\0')
		return (NULL);

	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->snext;
	}
	return (NULL);
}


/**
 * shash_table_print - prints a sorted hash table
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned long int in = 0;

	if (ht == NULL || ht->shead == NULL)
		return;

	printf("{");
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (in)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		in = 1;
	}
	printf("}\n");
}


/**
 * shash_table_print - prints a sorted hash table in a reverse order
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	unsigned long int in = 0;

	if (ht == NULL || ht->shead == NULL)
		return;

	printf("{");
	tmp = ht->stail;
	while (tmp != NULL)
	{
		if (in)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		in = 1;
	}
	printf("}\n");
}


/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the hash table to be deleted
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	while (ht->shead)
	{
		tmp = ht->shead->next;
		free(ht->shead->key);
		free(ht->shead->value);
		free(ht->shead);
		ht->shead = tmp;
	}
	free(ht->array);
	free(ht);
}

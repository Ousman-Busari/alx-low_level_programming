#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, in = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (in)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key,
			       ht->array[i]->value);
			in = 1;
		}
	}
	printf("}\n");
}

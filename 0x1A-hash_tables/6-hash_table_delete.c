#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to be deleted
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head_in_array, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			head_in_array = ht->array[i];
			while (head_in_array)
			{
				temp = head_in_array->next;
				free(head_in_array->key);
				free(head_in_array->value);
				free(head_in_array);
				head_in_array = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}

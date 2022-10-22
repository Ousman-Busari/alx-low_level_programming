#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int index;
    char *key;

    key = "mentioner";
    ht = hash_table_create(1024);
    index = key_index((const unsigned char *)key, ht->size);
    hash_table_set(ht, "hetairas ", "first at the index");
    hash_table_set(ht, "mentioner", "second at the index");
    printf("%s \n", ht->array[index]->value);
    printf("%s \n", ht->array[index]->next->value);
    return (EXIT_SUCCESS);
}

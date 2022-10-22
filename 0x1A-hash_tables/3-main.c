#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas ", "first at the index");
    hash_table_set(ht, "mentioner", "second at the index");
    return (EXIT_SUCCESS);
}

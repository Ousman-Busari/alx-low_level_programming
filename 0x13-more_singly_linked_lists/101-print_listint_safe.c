#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints the elementsin a  list
 * @head: A pointer to listint_t structure
 *
 * Return: number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	if (head == NULL)
		exit(98);

	while (head->n != 0)
	{
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
       	nodes++;
       	printf("[%p] %d\n", (void *)head, head->n);
	return (nodes);
}

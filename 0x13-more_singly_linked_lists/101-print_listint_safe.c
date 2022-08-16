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
	const listint_t *temp = head, *in_cir;

	if (head == NULL)
		exit(98);

	do
	{
		nodes++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		if (temp == head->next->next)
			in_cir = temp;
		temp = temp->next;
	} while (temp && in_cir != temp);
	return (nodes);
}

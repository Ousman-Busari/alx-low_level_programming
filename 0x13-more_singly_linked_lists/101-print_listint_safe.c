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
	size_t nodes = 0, i;
	const listint_t *temp = head, *temp1, *in_cir;

	if (head == NULL)
		exit(98);

	do {
		nodes++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp1 = head;
		i = nodes;
		while (i--)
		{
			if (temp1 == temp->next)
			{
				in_cir = temp1;
				break;
			}
			temp1 = temp1->next;
		}
		temp = temp->next;
	} while (temp && temp != in_cir);
	return (nodes);
}

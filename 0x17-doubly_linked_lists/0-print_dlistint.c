#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly-linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}

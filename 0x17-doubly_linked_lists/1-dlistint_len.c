#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly-linked list
 * @head: pointer to the head of the list
 *
 * Return: number of elements in the list, 0 if NULL
 */

size_t dlistint_len(const dlistint_t *head)
{
	int counter = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		counter++;
		head = head->next;
	}

	return (counter);
}

#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums of all the data (n) of a listint_t
 * @head: the head node of the list
 *
 * Return: result of the summation
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

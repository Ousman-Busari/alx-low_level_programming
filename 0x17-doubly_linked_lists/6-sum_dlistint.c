#include "lists.h"

/**
 * sum_dlistint - sums all the data(n) of a dlistint list
 * @head: pointer to the head of the list
 *
 * Return: sum of all data, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
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

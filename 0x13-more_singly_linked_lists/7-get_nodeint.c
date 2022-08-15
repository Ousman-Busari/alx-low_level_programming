#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head node of the linked list
 * @index: index of the node to take
 *
 * Return: address of the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i, n = 0;

	temp = head;
	while (temp)
	{
		n++;
		temp = temp->next;
	};

	if (index > (n - 1))
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);
}

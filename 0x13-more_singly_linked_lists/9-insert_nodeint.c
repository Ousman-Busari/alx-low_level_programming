#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: haed node of the linked list
 * @index: the position where to insert
 * @n: the integer to insert
 *
 * Return: the head node of the resulting list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *temp, *temp1;
	unsigned int i, c = 0;

	temp1 = *head;
	while (temp1)
	{
		temp1 = temp1->next;
		c++;
	}

	if (index > c - 1)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}
	temp1 = *head;
	for (i = 0; i < index - 1; i++)
		temp1 = temp1->next;
	temp->next = temp1->next;
	temp1->next = temp;
	return (*head);
}
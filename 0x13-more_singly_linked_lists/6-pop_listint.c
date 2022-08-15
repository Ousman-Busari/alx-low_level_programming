#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list
 *
 * Return: the data of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (temp->n);
}

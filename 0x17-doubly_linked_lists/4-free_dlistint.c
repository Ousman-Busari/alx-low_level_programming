#include "lists.h"

/**
 * free_dlistint - frees a doubly-linked list
 * @head: pointer to the head pointer
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	if (head == NULL)
		exit(1);

	while (head->next)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
	free(head);
}

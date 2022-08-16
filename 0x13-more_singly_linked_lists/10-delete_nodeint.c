#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 * @head: head node of the linked list
 * @index: position of the node to delete
 *
 * Return: 1 if success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i = 1, j = 1;

	if (*head == NULL)
		return (-1);
	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	temp1 = *head;
	while (j <= index)
	{
		temp1 = temp->next;
		j++;
	}
	temp->next = temp1->next;
	free(temp1);
	return (1);
}

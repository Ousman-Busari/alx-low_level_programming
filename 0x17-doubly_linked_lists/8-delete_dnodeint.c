#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of a given
 * doubly-linked list
 * @head: head pointer of the list
 * @index: index to delete node
 *
 * Return: 1 if succesful. 0 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		(*head)->next->prev = temp;
		free(*head);
		*head = temp;
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}

	return (-1);
}

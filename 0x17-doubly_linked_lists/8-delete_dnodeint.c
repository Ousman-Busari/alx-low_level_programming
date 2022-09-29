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

	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			if (index == 0)
				*head = temp->next;

			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}

	return (-1);
}

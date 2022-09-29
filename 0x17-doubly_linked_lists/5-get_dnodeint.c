#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at the nth index of a dlinked list
 * @head: head pointer of the doubly-linked list
 * @index: the position of the node to get
 *
 * Return: the node at the specified index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

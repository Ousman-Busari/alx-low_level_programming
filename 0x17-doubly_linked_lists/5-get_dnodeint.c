#include "lists.h"

size_t dlistint_len(const dlistint_t *head);

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
	size_t dlist_len = dlistint_len(head);

	if (index >= dlist_len || head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}


/**
 * dlistint_len - returns the number of elements in a doubly-linked list
 * @head: pointer to the head of the list
 *
 * Return: number of elements in the list, 0 if NULL
 */

size_t dlistint_len(const dlistint_t *head)
{
	int counter = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		counter++;
		head = head->next;
	}

	return (counter);
}

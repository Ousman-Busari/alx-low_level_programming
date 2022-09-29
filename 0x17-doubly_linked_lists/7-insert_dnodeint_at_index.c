#include "lists.h"

size_t dlistint_len(const dlistint_t *head);

/**
 * insert_dnodeint_at_index - inserts a node with a given data(n)
 * at a given index(idx)
 * @head: pointer to the head pointer
 * @idx: index where to insert the newly created node
 * @n: data for the new node
 *
 * Return: pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
				     int n)
{
	size_t i = 0;
	size_t dlist_len = dlistint_len(*head);
	dlistint_t *temp, *temp1, *new_node;

	if (idx >= dlist_len || head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev =  NULL;
	new_node->next = NULL;

	temp = *head;
	while (temp)
	{
		if (i == (idx - 1))
			break;
		temp = temp->next;
		i++;
	}
	temp1 = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = temp1;
	temp1->prev = new_node;

	return (new_node);
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

#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node with a given data(n)
 * at a given index(idx)
 * @head: pointer to the head pointer
 * @idx: index where to insert the newly created node
 * @n: data for the new node
 *
 * Return: pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->next = temp;
			new_node->prev = temp->prev;
			new_node->prev->next = new_node;
			temp->prev = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	free(new_node);

	if (idx == i)
		return (add_dnodeint_end(h, n));
	return (NULL);
}

#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - revserves a linked list
 * @head: the head node of the linked list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL)
		return (NULL);

	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

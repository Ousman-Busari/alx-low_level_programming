#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head/identifier of the linked lists
 * @n: the integer to be added at the beginning
 *
 * Return: header of the linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *temp1;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	};

	temp1 = *head;
	while (temp1->next != NULL)
		temp1 = temp1->next;
	temp->next = temp1->next;
	temp1->next = temp;
	return (*head);
}

#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a doubly-linked list
 * @head: pointer to the head pointer
 * @n: the int data of the new node to be added
 *
 * Return: pointer to the new head node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	(*head)->prev = newNode;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

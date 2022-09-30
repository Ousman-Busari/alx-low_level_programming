#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of a doubly-linked list
 * @head: pointer to the head pointer
 * @n: the int data of the new node to be added
 *
 * Return: pointer to the head node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp_node;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	temp_node = *head;

	while (temp_node->next)
		temp_node = temp_node->next;

	newNode->next = temp_node->next;
	temp_node->next = newNode;
	newNode->prev = temp_node;
	return (newNode);
}

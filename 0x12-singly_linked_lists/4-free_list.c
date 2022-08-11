#include "lists.h"

/**
 * free_list -  frees a list_t list
 * @head: head of the linkedlist
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp->next != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
	free(temp->str);
	free(temp);
}

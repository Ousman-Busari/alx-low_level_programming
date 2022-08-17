#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - prints the elementsin a  list
 * @head: A pointer to listint_t structure
 *
 * Return: number of nodes. Exits with 98 on failure
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *in_cir;

	if (head == NULL)
		exit(98);

	do {
		in_cir = temp;
		while (in_cir != head->next)
		{
			in_cir = in_cir->next;
		}
		head = head->next;
	} while (head && head != in_cir);
	return (NULL);
}

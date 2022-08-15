#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned long int c = 0;

	while (h)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}

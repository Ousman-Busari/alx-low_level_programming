#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gives the number of nodes in a list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}

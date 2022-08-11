#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the linked list header
 *
 * Return: number of elements in the list;
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	while(h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

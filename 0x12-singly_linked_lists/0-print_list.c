#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints a singly linked list
 * @h: header of the singly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned long int n = 0;

	while (h)
	{
		n++;
		if (h->str != NULL)
			printf("[%lu] ", strlen(h->str));
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
	}
	return (n);
}

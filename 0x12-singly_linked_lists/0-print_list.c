#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a singly linked list
 * @h: header of the singly linked list
 *
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		n++;
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
	}
	return (n);
}

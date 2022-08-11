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
/*		if (h->len) */
			printf("[%u] ", h->len);
/*		else
		printf("[%u] ", 0); */
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
	}
	return (n);
}

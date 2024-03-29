#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: Pointer to the first node where value is located.O Otherwise
 *         NULL if head is NULL or value is not present
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *e_node, *n_node;

	if (!list)
		return (NULL);

	n_node = e_node = list;

	for (; e_node->n < value && e_node->next;)
	{
		n_node = e_node;
		if (e_node->express)
		{
			e_node = e_node->express;
			printf("Value checked at index [%ld] = [%d]\n",
			       e_node->index, e_node->n);
		}
		else
		{
			while (e_node->next)
				e_node = e_node->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	       n_node->index, e_node->index);

	for (; n_node->index < e_node->index &&
		     n_node->n < value; n_node = n_node->next)
		printf("Value checked at index [%ld] = [%d]\n",
		       n_node->index, n_node->n);
	printf("Value checked at index [%ld] = [%d]\n",
	       n_node->index, n_node->n);
	return (n_node->n == value ? n_node : NULL);
}

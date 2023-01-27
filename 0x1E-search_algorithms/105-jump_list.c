#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers using the
 *             jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: the value to search for
 *
 * Return: pointer to the first node where value is located, or
 *         -1 if value is absent or head is null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step;
	listint_t *low_pos, *jump;

	if (list == NULL)
		return (NULL);

	i = 0;
	step = sqrt(size);

	for (jump = list; jump->index + 1 < size && jump->n < value;)
	{
		low_pos = jump;
		i += step;
		for (; jump->index < i; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n",
		       jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	       low_pos->index, jump->index);

	for (; low_pos->index < jump->index &&
		     low_pos->n < value; low_pos = low_pos->next)
		printf("Value checked at index [%ld] = [%d]\n",
		       low_pos->index, low_pos->n);
	printf("Value checked at index [%ld] = [%d]\n",
	       low_pos->index, low_pos->n);

	return (low_pos->n == value ? low_pos : NULL);
}

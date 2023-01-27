#include "search_algos.h"
#include <math.h>

listint_t *jump_to(listint_t *list, size_t index);

/**
 * jump_to - jumps to a node in a sorted list whose
 *           index is eqaul to the one given
 * @list: pointer to the head of the list
 * @index: index value of the node to jump to
 *
 * Return: Pointer to the node with index eqaul to the one given
 */
listint_t *jump_to(listint_t *list, size_t index)
{
	while (list)
	{
		if (list->index == index)
			return (list);
		list = list->next;
	}

	return (NULL);
}

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
	size_t i, step, i_max;
	listint_t *low_pos;

	if (list == NULL)
		return (NULL);

	i = step = sqrt(size);

	for (; i <= size; i += step)
	{
		i_max = i < size ? i : size - 1;
		low_pos = jump_to(list, i_max);
		printf("Value checked at index [%ld] = [%d]\n",
		       i_max, low_pos->n);
		if (low_pos->n >= value)
			break;
	}

	i = i_max < i ? i - 2 * step : i - step;

	printf("Value found between indexes [%ld] and [%ld]\n",
	       i, i_max);

	low_pos = jump_to(list, i);
	for (; i <= i_max; i++)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		       i, low_pos->n);
		if (low_pos->n == value)
			return (low_pos);
		low_pos = low_pos->next;
	}

	return (NULL);
}

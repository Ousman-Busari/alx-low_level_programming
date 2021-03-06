#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers in ascending order
 * @min: starting value
 * @max: ending value
 *
 *Return: pointer to the array, or NULL
 */

int *array_range(int min, int max)
{
	int *arr, i, min_initial;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	min_initial = min;
	for (i = 0; i <= (max - min_initial); i++)
		arr[i] = min++;
	return (arr);
}

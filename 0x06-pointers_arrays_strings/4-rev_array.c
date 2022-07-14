#include "main.h"

/**
 * reverse_array - reverse array order
 * @a: the araay to reverse
 * @n: the number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i = 0;

	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}

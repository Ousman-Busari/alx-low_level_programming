#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array elements
 * @a: the array
 * @n: the number of elements to prints from the array
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (n - i > 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

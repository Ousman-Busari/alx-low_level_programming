#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - the the sum of the numbers on the diagonals
 * @a: the square matrix of integers
 * @size: the size of the square matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, total =  size * size, sum_l2r = 0, sum_r2l = 0;

	for (i = 0; i < total; i += size + 1)
		sum_l2r += a[i];
	for (i = size - 1; i < total - 1; i += size - 1)
		sum_r2l += a[i];
	printf("%d, %d\n", sum_l2r, sum_r2l);
}

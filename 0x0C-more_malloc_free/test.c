#include "main.h"
#include <stdio.h>

int main(void)
{
	int *arr, i;

	arr = _calloc(3, 4);
	for (i = 0; i < 3; i++)
	{
		arr[i] = 3;
		printf("%d\n", arr[i]);
	}
	return (0);
}

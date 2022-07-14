#include <stdio.h>
#include "main.h"

int main(void)
{
	int i, a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	reverse_array(a, sizeof(a) / sizeof(int));
	for (i = 0; i < 10; i++)
		printf("%d, ", a[i]);
}

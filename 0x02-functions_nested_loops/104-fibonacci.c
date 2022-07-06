#include <stdio.h>

/**
 * main - entry point
 *
 * Return:Always 0 (Success)
 */

int main(void)
{
	int i;
	long double fib1 = 1, fib2 = 2, fib;

	printf("%.0Lf, %.0%Lf, ", fib1, fib2);
	for (i = 3; i <= 98; i++)
	{
		fib = fib1 + fib2;
		printf("%.0Lf, ", fib);
		if (i == 98)
			printf("%.0Lf\n", fib);
		fib1 = fib2;
		fib2 = fib;
	}
	return (0);
}

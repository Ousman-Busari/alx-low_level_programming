#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowCase = 'a';

	for (; lowCase <= 'z'; lowCase++)
	{
		if (lowCase == 'q' || lowCase == 'e')
			continue;
		else
		putchar(lowCase);
	}
	putchar('\n');

	return (0);
}

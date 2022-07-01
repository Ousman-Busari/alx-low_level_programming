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
	char upperCase = 65;
	char lowerCase;

	for (lowerCase = 97; lowerCase <= 122; lowerCase++)
		putchar(lowerCase);
	while (upperCase <= 90)
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');

	return (0);
}

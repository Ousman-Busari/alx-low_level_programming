#include "main.h"

/**
 * main - desciption
 * prints the english alphabets in order
 * Return: nothing
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}

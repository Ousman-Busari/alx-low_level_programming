#include <unistd.h>

/**
 * _putchar - print out a character
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, errno is set appropriately.
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

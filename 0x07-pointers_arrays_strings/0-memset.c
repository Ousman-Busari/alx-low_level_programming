#include "main.h"

/**
 * _memset - assignsn bytes of a memory address to a certain value
 * @s: the memoty address
 * @b: the char to assign to the specified memory space
 * @n: number bytes to assign or set
 * Return: pointer to the resulting memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
  int i;
  char *result = s;

  i = 0;
  while (i < n)
  {
    *s = b;
    s++, i++;
  }
  return (result);
}

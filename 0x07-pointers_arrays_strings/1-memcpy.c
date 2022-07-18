#include "main.h"

/**
 * _memcpy - copy memory from src to src
 * @dest: destination
 * @src: where to copy from
 * @n: number of bytes to copy
 * Return: pointer to resulting dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
  char *result = dest;

  while (n--)
  {
    *dest = *src;
    dest++, src++;
  }
  return (result);
}
  

#include "main.h"

/**
 * _memcpy - is a function that copies memory area.
 *
 * @dest: is the destination
 * @src: is the source
 * @n: an unsigned integere.
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
	dest[i] = src[n];
return (dest);
}

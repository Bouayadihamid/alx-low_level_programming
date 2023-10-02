#include "main.h"

/**
 * _strncpy - is a function that copies a string.
 *
 * @dest: the destination string
 * @src: the spurce string
 * @n: an integer
 *
 * Return: the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
int s = 0;

for (; src[s] != '\0' && s < n; s++)
{
	dest[s] = src[s];
}
while (s < n)
{
	dest[s] = '\0';
	s++;
}
return (dest);
}

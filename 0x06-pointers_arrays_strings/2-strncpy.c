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
int i = 0;
while (dest[s] != '\0' && i < n)
{
	dest[s] = src[i];
	i++;
	s++;
}
while (i < n)
{
	dest[s] = '\0';
	s++;
	i++;
}
return (dest);
}

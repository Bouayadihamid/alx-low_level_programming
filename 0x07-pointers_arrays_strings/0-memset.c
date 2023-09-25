#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte.
 *
 * @s: memory area
 * @b: constant byte
 *@n: n memory
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}

#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte.
 *
 * @n: n memory
 * @b: constant byte
 * @s: memory area
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
for (n = 0; s[n] != '\0'; n++)
{
	if (n != 0)
		s[n] = b;
	else
		return (s);
}
return (s);
}

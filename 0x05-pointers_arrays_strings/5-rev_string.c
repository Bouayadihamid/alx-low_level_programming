#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s : string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char *i = s;

	while (*i != '\0')
		i++;
	i--;
	while (i >= s)
	{
		putchar(*i);
		i--;
	}
	putchar('\n');
}

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
	int i = 0;

	while (s[i] != '\0')
		i++;
	while (i--)
	{
		putchar(s[i]);
	}
	s[i + 1] = '\0';

	putchar('\n');
}

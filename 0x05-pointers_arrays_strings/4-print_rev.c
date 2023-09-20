#include "main.h"

/**
 * print_rev - prints in reverse, followed by a new line.
 *
 * @s : string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}

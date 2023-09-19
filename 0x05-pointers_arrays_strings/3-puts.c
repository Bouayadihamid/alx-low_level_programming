#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 *
 * @str : strength
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}

#include "main.h"

/**
 *_strlen_recursion - is a function that returns the length of a string
 *
 *@s: is a string
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	else
	{
	i++;
	return (i + _strlen_recursion(s + 1));
	}
}


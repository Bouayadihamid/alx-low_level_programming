#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @str : length of a string
 *
 * Return: results
 */

int _strlen(char *s)
{
	int str;
	for (str = 0; *s != '\0'; s++)
		str++;
	return (str);
}

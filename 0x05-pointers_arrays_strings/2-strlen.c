#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s : character
 *
 * Return: results
 */

int _strlen(char *s)
{
	int leng;

	for (leng = 0; *s != '\0'; s++)
		leng++;
	return (leng);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup- is a function that print a string
 *
 *@str: is a string
 *
 *Return: retun n
 */

char *_strdup(char *str)
{
	unsigned int i;

	char *n = (char *)malloc(strlen(str) * sizeof(char));

	if (str == 0 || n < str)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
	{
		n[i] = str[i];
	}
	return (n);
}

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
	char *n;

	if (str == NULL)
	{
		return (NULL);
	}
	n = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str) + 1; i++)
	{
		n[i] = str[i];
	}
	return (n);
}

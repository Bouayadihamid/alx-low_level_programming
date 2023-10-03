#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array- is a function that creates an array
 *
 *@size: size of the array
 *@c: is a character
 *
 *Return: return NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;

char *n = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		n[i] = c;
	}
	return (n);
}


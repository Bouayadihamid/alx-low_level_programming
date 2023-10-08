#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range- is a function that arrange by order
 *
 *@min: is an integer
 *@max: is an integer
 *
 *Return: pointer to ptr
 */

int *array_range(int min, int max)
{
	int *ptr;
	int tsize, i;

	if (min > max)
		return (NULL);
	tsize = max - min + 1;
	ptr = malloc(sizeof(int) * tsize);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < tsize; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}

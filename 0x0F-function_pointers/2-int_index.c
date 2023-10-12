#include "function_pointers.h"
/**
 *int_index- is a function
 *
 *@array: is a pointer to array
 *@size: the size
 *@cmp: is a pointer to function cmp
 *
 *Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}

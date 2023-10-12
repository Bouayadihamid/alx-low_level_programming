#include "function_pointers.h"

/**
 *array_iterator- is a function
 *
 *@array: is a pointer to array
 *@size: is the size of the array
 *@action: is a pointer to action
 *
 *Return: return integers
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}

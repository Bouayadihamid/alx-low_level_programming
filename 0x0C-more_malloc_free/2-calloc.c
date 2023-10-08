#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc- is a function that allocate memory
 *
 *@nmemb: is an unsigned int
 *@size: is an unsigned int
 *
 *Return: return ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	void *ptr = malloc(total_size);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_realloc- is a function that reallocates a memory
 *
 *@ptr: is a pointer
 *@old_size: is an unsigned int
 *@new_size: is an unsigned int
 *
 *Return: returns a pointer to the ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
ptr = malloc(old_size);
if (new_size > old_size)
{
	ptr = malloc(new_size);
}
if (new_size == old_size)
{
	return (ptr);
}
if (ptr == NULL)
{
	ptr = malloc(new_size);
}
if (new_size == 0 && ptr == NULL)
{
	free(ptr);
	return (NULL);
}
return (ptr);
}

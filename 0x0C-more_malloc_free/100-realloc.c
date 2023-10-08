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
int copy_size;
void *ptr1;

if (ptr == NULL)
{
	return (malloc(new_size));
}
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
if (new_size == old_size)
{
	return (ptr);
}
ptr1 = malloc(new_size);
if (ptr1 == NULL)
	return (NULL);
copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(ptr1, ptr, copy_size);
	free(ptr);
	return (ptr1);
}

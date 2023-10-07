#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked- is a function
 *
 *@b: unsigned integere
 *
 *Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
int *ptr;

ptr = malloc(b);
if (ptr == 0)
{
	exit(98);
}
return (ptr);
}

#include "main.h"

/**
 * set_bit - sets a bit
 * @n: ptr
 * @index: integer
 *
 * Return: returns 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}

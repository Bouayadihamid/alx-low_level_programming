#include "main.h"

/**
 * get_bit - return a bit at given index
 * @n: integer
 * @index: integer
 *
 * Return: return a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
	{
		return (-1);
	}
	return (n >> index & 1);
}

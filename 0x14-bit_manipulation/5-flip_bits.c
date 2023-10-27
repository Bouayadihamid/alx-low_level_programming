#include "main.h"

/**
 * flip_bits - flips bits
 * @n: integer
 * @m: integer
 *
 * Return: the nmber of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int i = 0;

	while (XOR)
	{
		if (XOR & 1ul)
			i++;
		XOR = XOR >> 1;
	}
	return (i);
}

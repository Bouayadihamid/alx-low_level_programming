#include "main.h"

/**
 * reverse_array - a function that reverses a string
 *
 * @a: an integer
 * @n: an integer
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
int i;
int swap;

for (i = 0; i < n / 2; i++)
{
swap = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = swap;
}
}

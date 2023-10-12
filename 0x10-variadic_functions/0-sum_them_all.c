#include "variadic_functions.h"

/**
 *sum_them_all- is a function that sum
 *
 *@n: is the nbr of counts
 *
 *Return: the value of sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list numbers;
int sum = 0;
unsigned int i;

if (n == 0)
	return (0);
va_start(numbers, n);
for (i = 0; i < n; i++)
{
	int num = va_arg(numbers, int);
	sum = sum + num; /* sum += num */
}
va_end(numbers);
return (sum);
}

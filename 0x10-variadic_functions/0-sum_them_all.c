#include "variadic_functions.h"

/**
 *sum_them_all- is a function that sum
 *
 *@n: is the nbr of counts
 *@...: the integer to sum
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
for (i = n; i > 0; i--)
{
	int num = va_arg(numbers, int);

	sum += num;
}

va_end(numbers);
return (sum);
}

#include "main.h"

/**
 *factorial- is a function that returns the factorial of a given num
 *
 *@n: is a given num
 *
 * Return: the factorial
 */

int factorial(int n)
{
int r;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		r = n * factorial(n - 1);
		return (r);
	}
}

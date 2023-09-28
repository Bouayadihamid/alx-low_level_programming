#include "main.h"

/**
 *_sqrt_recursion- is a function that returns the natural root of a number
 *
 *@n: is a given num
 *
 * Return: the natural root of a number
 */

int helper(int n, int val);
int _sqrt_recursion(int n)
{
return (helper(n, 1));
}
int helper(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return (helper(n, val + 1));
else
	return (-1);
}

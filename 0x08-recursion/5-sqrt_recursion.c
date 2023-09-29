#include "main.h"

/**
 *_sqrt_recursion- is a function that returns the natural root of a number
 *helper- is function that helps solve this problem
 *
 * @n: is a given num
 *@val: value
 *
 * Return: the natural root of a number
 */

int helper(int n, int val);
int _sqrt_recursion(int n)
{
return (helper(n, 1));
}
/**
 *helper- is function that helps solve this problem
 *
 *@n: is a given num
 *@val: value
 *
 * Return: the natural root of a number
 */

int helper(int n, int val)
{
if (val * val == n)
	return (val);
else if (val * val < n)
	return (helper(n, val + 1));
else
	return (-1);
}

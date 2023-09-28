#include "main.h"

/**
 *factorial- is a function that returns the factorial of a given num
 *
 *@n: is a given num
 *
 * Return: the factorial
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);
return (x * _pow_recursion(x, y - 1));
}

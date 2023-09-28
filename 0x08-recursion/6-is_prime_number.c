#include "main.h"

/**
 *factorial- is a function that returns the factorial of a given num
 *
 *@n: is a given num
 *
 * Return: the factorial
 */

int check_prime(int n, int othern);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
int check_prime(int n, int othern)
{
if (othern >= n && n > 1)
	return (1);
else if (n % othern == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, othern + 1));
}

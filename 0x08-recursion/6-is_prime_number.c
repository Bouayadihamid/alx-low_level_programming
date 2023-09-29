#include "main.h"

/**
 *is_prime_number- returns 1 if integer is a prime number
 *
 *@n: is a given num
 *
 * Return: returns 1 or 0
 */

int check_prime(int n, int othern);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
/**
 *check_prime- returns 1 if integer is a prime number
 *
 *@n: is a given num
 *@othern: other number
 *
 * Return: returns 1 or 0
 */

int check_prime(int n, int othern)
{
if (othern >= n && n > 1)
	return (1);
else if (n % othern == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, othern + 1));
}

#include "variadic_functions.h"

/**
 *print_strings- function that prints strings
 *
 *@separator: is a separator of type character
 *@n: number of arguments
 *@...: eclipse
 *
 *Return: return the result
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
va_end(args);
printf("\n");
}

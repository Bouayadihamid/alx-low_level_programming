#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments to be printed
 * @...: variable number of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *separator;

	va_start(args, format);
	i = 0;
	separator = "";

	while (format && format[i])
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		separator = ", ";
		if (format[i] == 'c')
			printf("%c", va_arg(args, int));
		else if (format[i] == 'i')
			printf("%d", va_arg(args, int));
		else if (format[i] == 'f')
			printf("%f", (float)va_arg(args, double));
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

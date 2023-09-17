#include "main.h"

/**
* print_most_numbers - print from 0 to 9 except 2 and 4.
*
* @a
*
* Return: print results
*/

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + a);
		}
	}
	_putchar('\n');
}

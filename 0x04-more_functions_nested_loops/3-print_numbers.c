#include "main.h"

/**
* print_numbers - print from 0 to 9.
*
* @a
*
* Return: print results
*/

void print_numbers(void)

{
	int a;

	for (a = 0; a <= 9; )
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}

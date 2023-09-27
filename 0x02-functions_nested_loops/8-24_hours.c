#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return:void
 */

void jack_bauer(void)
{

/*int h1;
int h2;
int m1;
int m2;
int a = 9;

h2 = 0;
while (h2 <= 2)
{
	if (h2 == 2)
	{
*/		/*Restrain to 23h, not 29*/
/*		a = 3;
	}
	h1 = 0;
	while (h1 <= a)
	{
		m2 = 0;
		while (m2 <= 5)
		{
			m1 = 0;
			while (m1 <= 9)
			{
				_putchar('0' + h2);
				_putchar('0' + h1);
				_putchar(':');
				_putchar('0' + m2);
				_putchar('0' + m1);
				_putchar('\n');
				m1++;
			}
			m2++;
		}
		h1++;
	}
	h2++;
}*/
int a = 0;
int b = 0;
int c = 0;
int d = 0;

for (d = 0; d <= 2; d++)
{
	for (c = 0; c <= 3; c++)
	{
		for (b = 0; b <= 5; b++)
		{
			for (a = 0; a <= 9; a++)
			{
				printf("%d%d:%d%d\n", d, c, b, a);
			}
			/*b++;*/
		}
		/*c++;*/
	}
	/*d++;*/
}
}

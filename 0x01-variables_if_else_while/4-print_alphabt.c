#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a to z except e and q
 * Return: Always 0 (Success)
*/
int main(void)
{
	char m = 'a';
	while (m >= 'a' && m <= 'z')
	{
		if (m == 'e' || m == 'q')
		{
			m++;
		}
		else
		{
			putchar(m);
			m++;
		}
	}
	putchar('\n');
	return (0);
}

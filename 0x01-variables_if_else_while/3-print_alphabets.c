#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A to Z and a to z
 * Return: Always 0 (Success)
*/
int main(void)
{
	char m = 'a';
	char n = 'A';

	while (m >= 'a' && m <= 'z')
	{
		putchar(m);
		m++;
	}
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

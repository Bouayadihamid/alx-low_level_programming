#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: When I can't fall asleep, I play what I call the alphabet game
 * Return: Always 0 (Success)
*/
int main(void)
{
	char n = 'a';

	for (; n <= 'z';)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

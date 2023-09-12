#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
 * Return: Always 0 (Success)
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

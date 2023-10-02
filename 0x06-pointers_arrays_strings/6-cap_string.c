#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: a sting
 *
 * Return: always 0
 */

char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
for (; str[i] == ' '; i++)
	printf("%d", i);
i++;
}
return (str);
}

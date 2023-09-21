#include "main.h"
#include <stdio.h>

/**
 * _strcmp - is a function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 always
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

for (; s1[i] != s2[i] &&  s1[i] != '\0' && s2[i] != '\0'; i++)
{
	if (s1[i] == s2[i])
		return (s1[i] - s2[i]);
	if (s1[i] - s2[i] > 0)
		return (s1[i] - s2[i]);
	else
		return (s1[i] - s2[i]);
}
return (0);
}

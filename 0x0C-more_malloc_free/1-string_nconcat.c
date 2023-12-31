#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - is a function that concat
 *
 *@s1: is a character
 *@s2: is a character
 *@n: is an integer
 *
 *Return: return to a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, j, len1, len2;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
	n = len2;
}
ptr = malloc(len1 + n + 1);

if (ptr == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
	ptr[i] = s1[i];
}
for (j = 0; s2[j] != '\0' && j < n; j++)
{
	ptr[i] = s2[j];
	i++;
}
ptr [i] = '\0';
return (ptr);
}

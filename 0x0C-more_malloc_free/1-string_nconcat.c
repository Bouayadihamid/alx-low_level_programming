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
for (i = 0; s1[i] != '\0'; i++)
{
	len1 = i++;
}
for (i = 0; s2[i] != '\0'; i++)
{
	len2 = i++;
}
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
	ptr[i + j] = s2[j];
}
ptr [i + j] = '\0';
return (ptr);
}

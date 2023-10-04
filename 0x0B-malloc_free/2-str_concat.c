#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *str_concat- is a fonctions that concats 2 stings
 *
 *@s1: string 1
 *@s2: string 2
 *
 *Return: point to s1 and s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *n;
	int i, j, len1, len2;

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

	n = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		n[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		n[i + j] = s2[j];
	}
	n[i + j] = '\0';
	return (n);

}

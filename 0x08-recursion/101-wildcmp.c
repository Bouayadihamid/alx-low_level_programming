#include "main.h"

/**
 *wildcmp- is a fuction that compares two strings
 *
 *@s1: string 1
 *@s2: string 2
 *
 *Return: return 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && (*s2 != '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '?')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
		return (1);
		}
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
		return (1);
		}
	}
	return (0);
}

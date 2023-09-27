#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix.
 *
 *@s: is a char
 *@accept: is a char
 *
 *Return: Returns the number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{

int count = 0;
int i = 0;

for (; s[count] != '\0'; count++)
{
	for (; accept[i] != s[count]; i++)
	{
		if (accept[i] == '\0')
			return (count);
	}
}
return (count);
}

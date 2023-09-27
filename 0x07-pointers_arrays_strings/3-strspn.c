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

unsigned int count, i;

for (count = 0; s[count] != '\0'; count++)
{
	for (i = 0; accept[i] != s[count]; i++)
	{
		if (accept[i] == '\0')
			return (count);
	}
}
return (count);
}

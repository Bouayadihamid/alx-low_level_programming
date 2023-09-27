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
	int count;
	int i = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == accept[i] && accept[i] != '\0')
		{
			break;
		}
		if (accept[i] == '\0')
			return (count);
		i++;
	}
	return (count);
}

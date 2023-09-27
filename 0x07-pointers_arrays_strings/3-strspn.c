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

for (count = 0; s[count] != '\0' && accept[count] != '\0'; )
{
	if (s[count] == accept[count])
		return (count);
		count++;
}
return (count);
}

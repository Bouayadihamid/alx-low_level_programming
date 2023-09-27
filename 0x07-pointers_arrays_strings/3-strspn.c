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

while (s[count] != '\0')
{
while (accept[i] != '\0')
{
	if (s[count] == accept[i])
		break;
	i++;
}
if (accept[i] == '\0')
return (count);
count++;
}
return (count);
}

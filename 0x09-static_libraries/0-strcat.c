#include "main.h"

/**
 * _strcat - Concatenate two strings.
 *
 * @src: The source string to appended to dest.
 * @dest: The destination string
 *
 * Return: A pointer to the resulting concatenated string (dest)
 */

char *_strcat(char *dest, char *src)
{
int s1 = 0;
int s2 = 0;

while (s1[dest] != '\0')
{
	s1++;
}
while (src[s2] != '\0')
{
dest[s1] = src[s2];
s2++;
s1++;
}
dest[s1] = '\0';

return (dest);
}

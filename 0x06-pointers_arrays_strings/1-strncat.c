#include "main.h"

/**
 * _strncat - is a function similar to strcat but it uses n bytes.
 *
 * @src: source sting
 * @dest: destination string
 *@n: is an int
 *
 * Return: _strncat as a pointer to the destination _strncat
 */

char *_strncat(char *dest, char *src, int n)
{
int s = 0, i = 0;

while (dest[s] != '\0')
	s++;
while (src[i] != '\0' && i < n)
{
	dest[s] = src[i];
	i++;
	s++;
}
dest[s + i] = '\0';
return (dest);
}

#include "main.h"
#include <stddef.h>

/**
 *_strchr - is function that locates a character in a string
 *
 *@s: is a string
 *@c: the first occurence of the character.
 *
 *Return:the occurence of the character c or null.
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; )
{
	if (s[i] == c)
		return (&s[i]);
	i++;
}
return (NULL);
}

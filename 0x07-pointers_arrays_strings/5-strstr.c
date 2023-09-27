#include "main.h"

/**
 *_strstr- is a function that locates a substring.
 *
 *@haystack: is a string
 *@needle: is a string
 *
 *Return: a pointer to the beginning of the located substring
 */
 
char *_strstr(char *haystack, char *needle)
{
int i, j;

for (i = 0; haystack[i] != '\0'; i++)
{
	for (j = 0; needle[i] != '\0'; j++)
		if (needle[j] != haystack[i])
			break;
	if ('\0' != needle[j])
		return (&haystack[i]);
}
return ('\0');
}

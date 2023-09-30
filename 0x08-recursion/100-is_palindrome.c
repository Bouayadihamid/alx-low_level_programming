#include "main.h"
#include <string.h>

/**
 *helper- is a function that helps
 *
 *@s: is a character
 *@start: is an integer
 *@end: is an integer
 *
 *Return: return 1 or 0
 */

int helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
return (helper(s, start + 1, end - 1));
}
/**
 *is_palindrome- is a function that checks if a string is a palindrome
 *
 *@s: is a character
 *
 *Return: return 1 or 0
 */
int is_palindrome(char *s)
{
int len = strlen(s);

return (helper(s, 0, len - 1));
}

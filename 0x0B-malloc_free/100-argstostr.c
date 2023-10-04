#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *argstostr - is a function that conact
 *
 *@ac : integer
 *@av: character
 *
 *Return: a pointer
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int tt = 0;
	int i;
	int j = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		tt += strlen(av[i]) + 1;
	}
	result = malloc(tt + 1);
	for (i = 0; i < ac; i++)
	{
		int length = strlen(av[i]);

		strcpy(result + j, av[i]);
		j += length;
		result[j++] = '\n';
	}
	result[tt] = '\0';
	return (result);
}

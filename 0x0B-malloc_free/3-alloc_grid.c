#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 **alloc_grid- returns 2D
 *
 *@width: integer
 *@height: integer
 *
 *Return: pointer to 2D
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **c;

if (width <= 0 || height <= 0)
{
	return (NULL);
}
c = (int **)malloc(height * sizeof(int *));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		c[i] = (int *)malloc(width * sizeof(int));
		if (c[i] == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(c[j]);
			}
			free(c);
			return (NULL);
		}
		for (j = 0; j <= height; j++)
		{
			c[i][j] = 0;
		}
	}
return (c);
}

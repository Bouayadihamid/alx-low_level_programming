#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - is a function that multiplies two positive numbers
 *
 *@argc: is an argument
 *@argv: is a character
 *
 *Return: return the result
 */

int main (int argc, char *argv[])
{
	int num1, num2, mul;
	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}

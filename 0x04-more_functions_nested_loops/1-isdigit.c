#include "main.h"
#include <stdio.h>

/**
 * 1-isdigit(c) - check if c is a digit.
 *@c: input for digit
 * Return: 1 if its uppercase. 0 if not
 */

int _isdigit(int c)
        {
                if (c >= '0' && c <= '9')
                        return (1);
                else
                        return (0);
        }


#include "main.h"
#include <stdio.h>

/**
* _abs - return abs value
* @n : number to check
* Return:0 or 1
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (1 * n);
	}
	else
		return (n * -1);
/* return (n >= 0 ? n : n * -1);*/
}

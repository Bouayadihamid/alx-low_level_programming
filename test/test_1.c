#include "main.h"

int main()
{
	int a, b, c, d;
	a = 0;

	a = b = c = d = 10;
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
	printf("a = %d\n", a);
	a += 1;
	printf("a = %d\n", a);
	a %= 2;
	printf("a = %d\n", a);
	return (0);
}

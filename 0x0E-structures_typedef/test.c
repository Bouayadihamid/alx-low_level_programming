#include <stdio.h>

/**
 *main- sum
 *
 *
 *
 *
 *Retrun: return sum
 */

int sum(int a, int b)
{
        return (a + b);
}
int main()
{
int s = 0;

int (*ptr)(int, int) = &sum;
s = (*ptr)(2, 3);
printf("Sum = %d\n", s);
return (s);
}

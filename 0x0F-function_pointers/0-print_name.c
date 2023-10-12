#include "function_pointers.h"

/**
 *print_name- print the name
 *
 *@name: is a character
 *@f: a function pointer
 *
 *Return: return the name
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

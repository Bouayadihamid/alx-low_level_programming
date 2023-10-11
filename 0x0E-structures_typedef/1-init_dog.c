#include "dog.h"

/**
 *init_dog- is a function to initialize a variable
 *
 *@d: the dog to initial
 *@name: the dog name
 *@age: the dog age
 *@owner: the dog owner
 *
 *Return: return void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
}

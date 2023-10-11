#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *new_dog- is a function
 *
 *@name: the name
 *@age: the age
 *@owner: the owner
 *
 *Return: pointer or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = strdup(name);
	newDog->age = age;
	newDog->owner = strdup(owner);
return (newDog);
}

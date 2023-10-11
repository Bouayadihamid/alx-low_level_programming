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
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	if (name == NULL || owner == NULL)
	{
		free(newDog);
		free(owner);
		free(name);
		return (NULL);
	}
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
return (newDog);
}

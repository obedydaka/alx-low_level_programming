#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - This function initializes a variable of type struct dog.
 * @d: a struct to initialize
 * @name: The Dog's name
 * @age: The Dog's age
 * @owner: The Dog's owner
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

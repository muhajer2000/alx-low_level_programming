#include <stdio.h>
#include "dog.h"


/**
 * init_dog - a function that initialize a variable
 * @d: struct dog variable
 * @name: string name of struct dog
 * @age: age of dog
 * @owner: the owner of dog
 * Return: 0 (success)
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

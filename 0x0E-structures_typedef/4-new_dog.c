#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - print string copy
 * @dest: string copy to
 * @src: string that copy from
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
	{
		dest[j] = src[j];
	dest[j] = '\0';
	}
	return (dest);
}
/**
 * _strlen - string count
 * @str: string that count
 * Return: string count (lenght)
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * new_dog -  a function that creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (!name || age < 0 || !owner)
		return (NULL);
	dogg = (dog_t *)malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	(*dogg).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dogg).name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogg->owner == NULL)
	{
		free((*dogg).name);
		free(dogg);
		return (NULL);
	}

	dogg->name = _strcpy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcpy(dogg->owner, owner);
	return (dogg);
}

#ifndef dog_h
#define dog_h

/**
 * struct dog - struct of dog proprites
 * Description: list of dog information by structure
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*dog.h*/

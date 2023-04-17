#include "dog.h"

/**
 * init_dog - initializes a structure of type dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *DOG, char *name, float age, char *owner)
{
	if (DOG)
	{
		DOG->name = name;
		DOG->age = age;
		DOG->owner = owner;
	}
}


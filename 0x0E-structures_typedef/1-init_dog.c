#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *dd, char *name, float age, char *owner)
{
	if (dd == NULL)
		dd = malloc(sizeof(struct dog));
	dd->name = name;
	dd->age = age;
	dd->owner = owner;
}

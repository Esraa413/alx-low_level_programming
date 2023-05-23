#include <stdio.h>
#include "dog.h"

/**
 * struct dog - dog's basic info
 * @name: First name
 * @age: int num
 * @owner: Third member
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

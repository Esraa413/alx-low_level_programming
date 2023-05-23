#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic info
 * @name: First name
 * @age: int num
 * @owner: Third member
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

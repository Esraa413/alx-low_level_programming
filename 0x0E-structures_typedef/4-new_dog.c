#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length
 * @str: string to evaluate
 * Return: Always 0
 */

int _strlen(char *str)
{
	int langth = 0;

	while (str[langth] != '\0')
	{
		langth++;
	}

	return (langth);
}

/**
 * *_strcpy - copies the string pointed
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
		dest[x] = src[x];
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: First name
 * @age: int num
 * @owner: Third member
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (0);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == 0)
		return (0);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == 0)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == 0)
	{
		free(dog);
		free(dog->name);
			return (0);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}

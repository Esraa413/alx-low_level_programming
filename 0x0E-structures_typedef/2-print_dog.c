#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog -  a function that prints a struct dog
 * @d: struct dog to print
 * Return: Always
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == 0)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = "(nil)";
	if (d->owner == 0)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
